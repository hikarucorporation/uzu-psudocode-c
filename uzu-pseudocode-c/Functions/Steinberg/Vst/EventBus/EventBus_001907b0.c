// Function : EventBus
// Namespace: Steinberg:Vst:EventBus
// Entry    : 001907b0
// Prototype: undefined EventBus(EventBus * this, undefined2 * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
// Body     : 001907b0 - 001908c2


/* Steinberg::Vst::EventBus::EventBus(char16_t const*, int, int, int) */

void __thiscall
Steinberg::Vst::EventBus::EventBus
          (EventBus *this,undefined2 *param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4)

{
  ulong __n;
  long lVar1;
  long lVar2;
  EventBus *__dest;
  
  *(undefined4 *)(this + 8) = 1;
  *(undefined ***)this = &PTR_queryInterface_007030c0;
  __dest = this + 0x20;
  *(EventBus **)(this + 0x10) = __dest;
  if (param_1 == (undefined2 *)0x0) {
    std::__throw_logic_error("basic_string: construction from null is not valid");
LAB_001908b7:
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("basic_string::_M_create");
  }
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    lVar1 = lVar2 + 1;
  } while (param_1[lVar2] != 0);
  __n = lVar2 * 2;
  if (0xe < __n) {
    if (0x3ffffffffffffffe < __n) goto LAB_001908b7;
    __dest = operator_new(__n + 2);
    *(EventBus **)(this + 0x10) = __dest;
    *(long *)(this + 0x20) = lVar2;
  }
  if (lVar2 != 0) {
    if (lVar2 == 1) {
      *(undefined2 *)__dest = *param_1;
    }
    else {
      memcpy(__dest,param_1,__n);
    }
  }
  *(long *)(this + 0x18) = lVar2;
  *(undefined2 *)(__dest + lVar2 * 2) = 0;
  *(undefined4 *)(this + 0x30) = param_2;
  *(undefined4 *)(this + 0x34) = param_3;
  this[0x38] = (EventBus)0x0;
  *(undefined ***)this = &PTR_queryInterface_00703150;
  *(undefined4 *)(this + 0x3c) = param_4;
  return;
}


