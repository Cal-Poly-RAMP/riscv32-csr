// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VOTTER_SIM.h"
#include "VOTTER_SIM__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VOTTER_SIM::VOTTER_SIM(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VOTTER_SIM__Syms(contextp(), _vcname__, this)}
    , CLK{vlSymsp->TOP.CLK}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VOTTER_SIM::VOTTER_SIM(const char* _vcname__)
    : VOTTER_SIM(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VOTTER_SIM::~VOTTER_SIM() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VOTTER_SIM___024root___eval_debug_assertions(VOTTER_SIM___024root* vlSelf);
#endif  // VL_DEBUG
void VOTTER_SIM___024root___eval_static(VOTTER_SIM___024root* vlSelf);
void VOTTER_SIM___024root___eval_initial(VOTTER_SIM___024root* vlSelf);
void VOTTER_SIM___024root___eval_settle(VOTTER_SIM___024root* vlSelf);
void VOTTER_SIM___024root___eval(VOTTER_SIM___024root* vlSelf);

void VOTTER_SIM::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VOTTER_SIM::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VOTTER_SIM___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VOTTER_SIM___024root___eval_static(&(vlSymsp->TOP));
        VOTTER_SIM___024root___eval_initial(&(vlSymsp->TOP));
        VOTTER_SIM___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VOTTER_SIM___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void VOTTER_SIM::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step VOTTER_SIM::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool VOTTER_SIM::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VOTTER_SIM::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VOTTER_SIM::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VOTTER_SIM___024root___eval_final(VOTTER_SIM___024root* vlSelf);

VL_ATTR_COLD void VOTTER_SIM::final() {
    VOTTER_SIM___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VOTTER_SIM::hierName() const { return vlSymsp->name(); }
const char* VOTTER_SIM::modelName() const { return "VOTTER_SIM"; }
unsigned VOTTER_SIM::threads() const { return 4; }
std::unique_ptr<VerilatedTraceConfig> VOTTER_SIM::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{true, false, false}};
};

//============================================================
// Trace configuration

void VOTTER_SIM___024root__trace_init_top(VOTTER_SIM___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VOTTER_SIM___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VOTTER_SIM___024root*>(voidSelf);
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VOTTER_SIM___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VOTTER_SIM___024root__trace_register(VOTTER_SIM___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VOTTER_SIM::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VOTTER_SIM::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VOTTER_SIM___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
