#include "BaseDef.h"
#include "fileLog.h"

namespace Model_Log{
using namespace std;

CFileLog::CFileLog(const char* fileName):m_logFile(fileName)
{
	// �����ļ�
	m_file.open(m_logFile.c_str(),ios::out|ios::app);	
}

CFileLog::~CFileLog()
{
	// �ͷ��ļ�
	m_file.close();
}

int CFileLog::WriteData(const char* szMsg)
{	
	m_file<<szMsg<<std::endl;	
	return 0;
}

void CFileLog::DeleteOneLine()
{
	
}
}
