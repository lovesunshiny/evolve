#include <iostream>
#include "ipen_ready.h"
#include "ipen_reading.h"

using namespace std;

ipen_reading* ipen_reading::__m_sp_instance = NULL;

ipen_reading::ipen_reading()
{


}

ipen_reading::~ipen_reading()
{
    if(__m_sp_instance != NULL) {
        delete __m_sp_instance;
        __m_sp_instance = NULL;
    }
}

ipen_reading* ipen_reading::instance()
{
    if(__m_sp_instance == NULL) {
        __m_sp_instance = new ipen_reading();
    }
    return __m_sp_instance;
}

void ipen_reading::handle()
{
    cout << "Hi, I am in the reading" << endl;  
}

void ipen_reading::enter_ready(ipen_state_chart* p_ctx)
{
    handle();
    change_state(ipen_ready::instance(), p_ctx);
}