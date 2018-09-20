#pragma once
#include "ipen_state.h"

class ipen_pending : public ipen_state
{
    public:
        static ipen_pending *instance();
        ~ipen_pending();

        void handle();
        void enter_ready(ipen_state_chart * p_cxt);

    private:
        ipen_pending();
	    static ipen_pending * __m_sp_instance;
};