#ifndef _WIN_FUN__H__
#define _WIN_FUN__H__
#include "BaseDef.h"


#if defined(__WINDOWS__)
#define  __STD_ETX_THREAD  unsigned __stdcall 
#include <process.h>
#include <set>
#include <string>
//������˵����strncasecmp()�����Ƚϲ���s1��s2�ַ���ǰn���ַ����Ƚ�ʱ���Զ����Դ�Сд�Ĳ���
//    ����ֵ ��������s1��s2�ַ�����ͬ�򷵻�0 s1������s2�򷵻ش���0��ֵ s1��С��s2�򷵻�С��0��ֵ 
#ifdef __cplusplus
extern "C"
{
#endif
extern int strncasecmp(const char *s1, const char *s2, size_t n);

extern int strcasecmp(const char *s1, const char *s);

#ifdef __cplusplus
}
#endif

//���ܣ����ַ���src��ǰn���ֽڸ��Ƶ�dest�� ����
//˵����bcopy������ַ����еĿ��ֽ�NULL������û�з���ֵ
extern void bcopy(const void *src, void *dest, int n);

extern std::string RecovertMyFile(std::string const& section);

extern void ReadFileSamll( std::string const& file ,std::string& rContent  );

extern  int EnmuDirectory(char const *pszDestPath,std::set<STRING>& myList,std::set<STRING>& myVisitedList,CHAR const* pTial);

//�ж��ļ��Ƿ���Ŀ¼
extern  bool isDirectory(char const *pszDestPath);

//���ļ���������
extern std::string Rename( std::string const& filePathName ,std::string const& newName  );

//�ָ��ļ�·�����ļ�����


//��ȡһ��Ŀ¼������ָ����ʽ���ļ��������ļ��ĸ���
#ifndef _DLL_TDENGIN_
extern int SerachFileFromDirectory(char const *pszDestPath,std::set<STRING>& myList,CHAR const* pTial);
#endif

//����߳������ID��pthread_t������Ϊunsigned long int�������ڴ�ӡ��ʱ��Ҫʹ��%lu��ʽ�����򽫲�����ֵĽ��
extern unsigned long int pthread_self();

#define O_NONBLOCK 1
#define  F_SETFL 0

#elif defined(__LINUX__)
#define  __STD_ETX_THREAD  void* 
#endif

extern void mySleep(int minsec);
 extern BOOL	CheckExitFile();
 CHAR		Value2Ascii(CHAR in);
 CHAR		Ascii2Value(CHAR in);

 BOOL		Binary2String(const CHAR* pIn,UINT InLength,CHAR* pOut);
 BOOL		DBStr2Binary(const CHAR* pIn,UINT InLength,CHAR* pOut,UINT OutLimit,UINT& OutLength);


 //����Quake3��strncpy����
 VOID Q_strncpyz( CHAR *dest, const CHAR *src, INT destsize ) ;

 //д��һ���ļ�����
 enum WRITE_TYPE
 {
	 OVERFLOW_WRITE=0,
	 APPEND_WRITE,
 };
 bool  WriteFile(CHAR const* FileName,CHAR const* pContent,WRITE_TYPE _ID=OVERFLOW_WRITE);
bool    ReadFile(std::string const& fileName,std::string& content);

BOOL   WriteDirectory(STRING   dd) ;

BOOL TryCreateDirectory(STRING dtr);

 void MyToLower(STRING& str);

 //��ȡ��ǰ���е�������Ŀ¼
 //Input ������ļ�������������ļ�����������ļ��Ƿ���ڣ����������ֱ�ӷ��ؿ�
 std::string GetShellScriptFullPath(CHAR const* pfileName = NULL);

 
 
#endif