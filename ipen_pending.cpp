#include <iostream>
#include "ipen_pending.h"
#include "ipen_ready.h"

using namespace std;

ipen_pending* ipen_pending::__m_sp_instance = NULL;

ipen_pending::ipen_pending()
{

}

ipen_pending::~ipen_pending()
{
    if(__m_sp_instance != NULL) {
        delete __m_sp_instance;
        __m_sp_instance = NULL;
    }
}

ipen_pending* ipen_pending::instance()
{
    if(__m_sp_instance == NULL) {
        __m_sp_instance = new ipen_pending();
    }
    return __m_sp_instance;
}

void ipen_pending::handle()
{
    cout << "Hi, I am in the pending" << endl;  
}

void ipen_pending::enter_ready(ipen_state_chart* p_ctx)
{
    handle();
    change_state(ipen_ready::instance(), p_ctx);
}
