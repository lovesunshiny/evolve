#include <iostream>
#include "ipen_ready.h"
#include "ipen_pending.h"
#include "ipen_reading.h"

using namespace std;

ipen_ready* ipen_ready::__m_sp_instance = NULL;

ipen_ready::ipen_ready()
{


}

ipen_ready::~ipen_ready()
{
    if(__m_sp_instance != NULL) {
        delete __m_sp_instance;
        __m_sp_instance = NULL;
    }
}

ipen_ready* ipen_ready::instance()
{
    if(__m_sp_instance == NULL) {
        __m_sp_instance = new ipen_ready();
    }
    return __m_sp_instance;
}

void ipen_ready::handle()
{
    cout << "Hi, I am in the ready" << endl;  
}

void ipen_ready::enter_pending(ipen_state_chart* p_ctx)
{
    handle();
    change_state(ipen_pending::instance(), p_ctx);
}

void ipen_ready::enter_reading(ipen_state_chart* p_ctx)
{
    handle();
    change_state(ipen_reading::instance(), p_ctx);
}