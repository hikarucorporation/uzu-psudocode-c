// Function : getProgramName
// Namespace: Steinberg:Vst:ProgramList
// Entry    : 00194230
// Prototype: undefined8 getProgramName(ProgramList * this, uint param_1, undefined8 * param_2)
// Body     : 00194230 - 00194324


/* Steinberg::Vst::ProgramList::getProgramName(int, char16_t*) */

undefined8 __thiscall
Steinberg::Vst::ProgramList::getProgramName(ProgramList *this,uint param_1,undefined8 *param_2)

{
  long lVar1;
  undefined2 *__src;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar4 = 1;
  if ((-1 < (int)param_1) &&
     ((int)param_1 < (int)((ulong)(*(long *)(this + 0x120) - *(long *)(this + 0x118)) >> 5))) {
    param_2[0x1e] = 0;
    param_2[0x1f] = 0;
    param_2[0x1c] = 0;
    param_2[0x1d] = 0;
    param_2[0x1a] = 0;
    param_2[0x1b] = 0;
    param_2[0x18] = 0;
    param_2[0x19] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    uVar5 = (ulong)param_1;
    lVar1 = *(long *)(this + 0x118);
    uVar2 = *(long *)(this + 0x120) - lVar1 >> 5;
    if (uVar2 <= uVar5) {
                    /* WARNING: Subroutine does not return */
      std::__throw_out_of_range_fmt
                ("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)",uVar5,
                 uVar2);
    }
    uVar2 = *(ulong *)(lVar1 + 8 + uVar5 * 0x20);
    uVar3 = 0x80;
    if (uVar2 < 0x80) {
      uVar3 = uVar2;
    }
    uVar4 = 0;
    if (uVar3 != 0) {
      __src = *(undefined2 **)(lVar1 + uVar5 * 0x20);
      if (uVar3 != 1) {
        memcpy(param_2,__src,uVar3 * 2);
        return 0;
      }
      *(undefined2 *)param_2 = *__src;
    }
  }
  return uVar4;
}


