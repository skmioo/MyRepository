#pragma once
#include <string>
#include <set>
typedef std::string STRING;
typedef STRING::size_type STRINGTYPE;
#define  STRINGEND STRING::npos

typedef  char CHAR;

//��ȡһ��Ŀ¼������ָ����ʽ���ļ��������ļ��ĸ���
extern int SerachFileFromDirectory(char const *pszDestPath,std::set<STRING>& myList,CHAR const* pTial);
 void MyToLower(STRING& str);

 //д��һ���ļ�����
 enum WRITE_TYPE
 {
	 OVERFLOW_WRITE=0,
	 APPEND_WRITE,
 };

extern  bool  MyWriteFile(CHAR const* FileName,CHAR const* pContent,WRITE_TYPE _ID=OVERFLOW_WRITE);
extern CHAR*    MyReadFile(std::string const& file,size_t& len);