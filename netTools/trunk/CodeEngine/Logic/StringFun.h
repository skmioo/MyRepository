#ifndef _STRING_FUN__H__
#define _STRING_FUN__H__
#include <string>
#include <map>
#include<list>
#include <vector>

using namespace std;

 void Replace(string &str,const char* psor,const char* pdest=NULL);
  void ReplaceRule(string &str,const char* psor);
  void Replace(string &str,string const& oldS,string const& newS,int len);
 string Left(string const& str,string::size_type len);
 string Right(string const& str,string::size_type len);
 void SkipDesc(string &str,const char* psor);
 bool EqualString(string const& rStr,string const& rDest,string const& rSkip);
 string StringLink(const char* pSource,const char* pDest,const char* pLinkString=NULL);
 string RraseTailNumber(const string &str);
 string __L(string const& rStr);
 string __B(string const& rStr);
 string __BB(string const& rStr);
 string __B(char ch);
 bool SpiltStringAndNumber(const string &str,string& rString,string& number,int nStart=0);
 bool IsCharacter(char ch);
 bool IsNumber(char ch);
 string CovertIntToString(int num);

 struct RealContent_T
 {
	 string m_Key;
	 list<string> m_Content;
 };

 typedef map<string,RealContent_T> RULE_MAP_T;

 //�޳����ַ�������ߵĿհ��ַ�
 void DimLeft(string& str);
 //���ڹ�����˷ָ� 
 void AnalyRule(RULE_MAP_T& ruleList,string const& rContent,char const* pReg);
  void AnalyRule(vector<string>& ruleList,string const& rContent,char const* pReg);
  void AnalyRule(vector<string>& ruleList,string const& rContent,vector<string> const& vReg);

  typedef string::size_type SIZE_STRING;
  //��ȡ�����ַ��ϼ�ֵ
SIZE_STRING GetMaxPostion(string const& rContent,vector<string> const& vReg,SIZE_STRING nCurPos,string& sub);
SIZE_STRING GetMinPostion(string const& rContent,vector<string> const& vReg,SIZE_STRING nCurPos,string& sub);


//���һ���ַ��Ƿ��ǿհ׷������ǿ�
bool IsEmptOrSpace(string const& rContent);
  //�޳�����ָ���ַ����Ժ���ַ�
  void RemoveLeft(string& str,string const& reg);

  //���ݹ����ȡһ���ַ���
  /*
  string const& rContent,  //��Ҫ���ҵ�ԭʼ�ַ���
  string::size_type& nCurrentPos, //��Ҫ���ҵ�ԭʼ�ַ�����ʼλ��
  string const& strStart,//��ʼƥ���ַ�
  string const& strEnd,//�����ַ�
  bool bmoveoffset=true//�Ƿ���Ŀ�ʼλ�ã����Ϊtrue��nCurrentPosָ�򵽽����ַ��ĺ�һ���ַ�λ�ã����û���ҵ�nCurrentPos����ı䣬����false
  */
 bool GetRuleString( string const& rContent,std::string& result ,string::size_type& nCurrentPos,string const& strStart,string const& strEnd ,bool bmoveoffset=true);

  //�ַ����ָ��
  void SpiltString(vector<string>& ListData,string const& rContent,char pReg=' ');
  void SpiltString(vector<string>& ListData,string const& rContent,char pReg[],int nSize);

  //�ҵ�һ���ַ������ַ����ĵ�λ����Ϣ
  //���һ������0��ʾ���ַ����ĺ����ң�1��ʾ���ַ�����ǰ����
  string::size_type GetMinePositionString(string const& rContent,char const* pReg,string::size_type nCurrentPos ,int nRule=0);

  //�������������дʵ�����
  void SortByRelationPosition(vector<string>& ListData,string const& rContent);
 bool HaveEn_us_String(string const& str);
 void ToAllEn_us_ToLow(string const& str,string& result);

 //��ȡһ��
 bool	GetLines(string const& rContent,string& rNewStr,string::size_type& nPos,string ch="\n");

 //����ǰ��Ŀհ׷�
 void  Trim(string& str);
 //�����ļ��ĺ�׺��
 string ChangeIndexTail(string const& rfile,string const& tail);
#endif