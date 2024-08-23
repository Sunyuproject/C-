#ifndef  __string1__
#define  __string1__
#include<string.h>



class string1{

    public:
            string1(const char * cstr=0);
            string1(const string1 &str);
            string1& operator =(const string1& str);
            ~string1();
            char *get()   const { return  m_data;}
     


    private:
            char *m_data;

};

inline string1::string1(const char *cstr)
{
        if(cstr)
        {
            m_data=new char[strlen(cstr)+1];
            strcpy(m_data,cstr);
        }
        else
        {
            m_data=new char[1];
           *m_data='\0';
        }

}
inline string1:: ~string1()
{
        delete[] m_data;

}
string1::string1(const string1& str)
{
    m_data=new char[strlen(str.m_data)+1];
    strcpy(m_data,str.m_data);
}



inline string1& string1::operator = (const string1 &str)
{
    if(this==&str)
    {
        return *this;
    }
    delete[] m_data;
    m_data=new char[strlen(str.m_data)+1];
    strcpy(m_data,str.m_data);
    return *this;
}




#endif