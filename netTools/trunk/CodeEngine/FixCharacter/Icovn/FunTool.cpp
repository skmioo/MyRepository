#include "FunTool.h"
#include <Windows.h>

int SerachFileFromDirectory( char const *pszDestPath,std::set<STRING>& myList,CHAR const* pTial )
{
	//�˽ṹ˵����MSDN;
	WIN32_FIND_DATA FindFileData;
	//�����ļ��ľ��;
	HANDLE hListFile;
	//����·��������c:\windows\system32\cmd.exe;
	char szFullPath[MAX_PATH];
	//���·��;
	char szFilePath[MAX_PATH];
	//�������·��;
	sprintf(szFilePath, "%s\\*", pszDestPath);
	//���ҵ�һ���ļ�����ò��Ҿ�������FindFirstFile����INVALID_HANDLE_VALUE�򷵻�;
	if((hListFile = FindFirstFile(szFilePath, &FindFileData)) == INVALID_HANDLE_VALUE)
	{
		//�����ļ�����;
		return -1;
	}
	else
	{
		do 
		{
			//����.��..;
			//��.��������Ŀ¼��..��������Ŀ¼;
			if( lstrcmp(FindFileData.cFileName, TEXT(".")) == 0 ||
				lstrcmp(FindFileData.cFileName, TEXT("..")) == 0 )
			{
				continue;
			}
			//����ȫ·��;
			sprintf(szFullPath, "%s\\%s", pszDestPath, FindFileData.cFileName);
			//��ȡ�ļ����ԣ���������ļ���;
			if(!(FindFileData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY))
			{	
				STRING resultss =szFullPath;
				if (pTial != NULL)
				{
					STRINGTYPE npos = resultss.find_last_of(".");
					STRING strTail = resultss;
					if (npos != STRINGEND)
					{
						strTail = resultss.substr(npos);
					}
					MyToLower(strTail);
					STRING sourceTail = pTial;
					MyToLower(sourceTail);
					if (strTail ==sourceTail  )
					{						
						myList.insert(resultss);					
					}


				}
				else
				{					
					myList.insert(resultss);					
				}
			}


			//������ļ��У���ݹ����EnmuDirectory����;
			if(FindFileData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
			{
				SerachFileFromDirectory(szFullPath,myList,pTial);
			}
			//ѭ����������һ���ļ�;
		}while(FindNextFile(hListFile, &FindFileData));
	}
	//�رվ��;
	FindClose(hListFile);
	return myList.size();
}

void MyToLower( STRING& str )
{
	STRING __temp;
	int len = 'a' - 'A';
	for (STRING::size_type i =0;i<str.length();++i)
	{
		char ch = str[i];
		if (ch >='A' && ch <= 'Z')
		{
			__temp.push_back(ch+len);
			continue;
		}
		__temp.push_back(ch);
	}
	str = __temp;
}



CHAR*    MyReadFile(std::string const& file,size_t& len)
{
	
		FILE* f = fopen( file.c_str(), "rb" ) ;
	if( f )
	{
		unsigned long filesize = -1;  
		try
		{

			fseek(f, 0L, SEEK_END);
			filesize = ftell(f);  
			fseek(f, 0L, SEEK_SET);
			if(filesize>0)
			{
				CHAR *szBuff = new CHAR[filesize+1];				
				memset(szBuff,0,sizeof(CHAR)*(filesize+1));
				fread( szBuff, 1, sizeof(CHAR)*(filesize+1), f ) ;				
				fclose(f) ;		
				len = filesize;
				return szBuff;
			}
		}
		catch(...)
		{
		}
		fclose(f) ;
	}
	else
	{
		return NULL;
	}
	return NULL;
}

bool MyWriteFile( CHAR const* sFile,CHAR const* pContent,WRITE_TYPE _ID/*=OVERFLOW_WRITE*/ )
{
	try{
		if (sFile == NULL || pContent==NULL )
		{
			return false;
		}
		FILE* f = NULL;
		if (_ID == APPEND_WRITE)
		{
			f = fopen( sFile, "a+" ) ;		
		}
		else
		{
			f = fopen( sFile, "w" ) ;		
		}
		if( f )
		{ 			
			fwrite( pContent, 1, strlen(pContent), f ) ;			
		}
		fclose(f);
	}
	catch(...){}
	return false;
}
