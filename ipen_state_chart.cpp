#include "ipen_state_chart.h"
#include "ipen_pending.h"
// #include "ipen_ready.h"
// #include "ipen_reading.h"


ipen_state_chart::ipen_state_chart()
{
    __m_pstate = ipen_pending::instance();
}

ipen_state_chart::~ipen_state_chart()
{
    delete __m_pstate;
    __m_pstate = NULL;
}

void ipen_state_chart::enter_pending_state()
{
    __m_pstate->enter_pending(this);
    cout << "Switch to pending mode" << endl;
}

void ipen_state_chart::enter_ready_state()
{
    __m_pstate->enter_ready(this);
    cout << "Switch to ready mode" << endl;
}

void ipen_state_chart::enter_reading_state()
{
    __m_pstate->enter_reading(this);
    cout << "Switch to reading mode" << endl;
}

// void ipen_state_chart::change_state(ipen_state* mode)
// {
//     __m_pstate = mode;
// }