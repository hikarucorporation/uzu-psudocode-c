// Function : AudioBus
// Namespace: Steinberg:Vst:AudioBus
// Entry    : 00190990
// Prototype: undefined AudioBus(AudioBus * this, undefined2 * param_1, undefined4 param_2, undefined4 param_3, undefined8 param_4)
// Body     : 00190990 - 00190aa2


/* Steinberg::Vst::AudioBus::AudioBus(char16_t const*, int, int, unsigned long) */

void __thiscall
Steinberg::Vst::AudioBus::AudioBus
          (AudioBus *this,undefined2 *param_1,undefined4 param_2,undefined4 param_3,
          undefined8 param_4)

{
  ulong __n;
  long lVar1;
  long lVar2;
  AudioBus *__dest;
  
  *(undefined4 *)(this + 8) = 1;
  *(undefined ***)this = &PTR_queryInterface_007030c0;
  __dest = this + 0x20;
  *(AudioBus **)(this + 0x10) = __dest;
  if (param_1 == (undefined2 *)0x0) {
    std::__throw_logic_error("basic_string: construction from null is not valid");
LAB_00190a97:
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
    if (0x3ffffffffffffffe < __n) goto LAB_00190a97;
    __dest = operator_new(__n + 2);
    *(AudioBus **)(this + 0x10) = __dest;
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
  this[0x38] = (AudioBus)0x0;
  *(undefined ***)this = &PTR_queryInterface_007031e0;
  *(undefined8 *)(this + 0x40) = param_4;
  return;
}


