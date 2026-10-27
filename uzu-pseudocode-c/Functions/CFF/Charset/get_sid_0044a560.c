// Function : get_sid
// Namespace: CFF:Charset
// Entry    : 0044a560
// Prototype: uint get_sid(Charset * this, uint param_1, uint param_2, uint * param_3)
// Body     : 0044a560 - 0044a69e


/* CFF::Charset::get_sid(unsigned int, unsigned int, CFF::code_pair_t*) const */

uint __thiscall CFF::Charset::get_sid(Charset *this,uint param_1,uint param_2,uint *param_3)

{
  Charset CVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  
  CVar1 = *this;
  if (CVar1 == (Charset)0x2) {
    if (param_2 <= param_1) {
      return 0;
    }
    if ((param_3 == (uint *)0x0) || (uVar5 = param_3[1], param_1 < uVar5)) {
      uVar5 = 1;
      uVar6 = 0;
      if (param_1 == 0) {
        return 0;
      }
    }
    else {
      uVar6 = *param_3;
    }
    uVar4 = param_1 - uVar5;
    uVar7 = (ulong)uVar6;
    uVar2 = *(ushort *)(this + uVar7 * 4 + 3) << 8 | *(ushort *)(this + uVar7 * 4 + 3) >> 8;
    uVar3 = (uint)uVar2;
    if (uVar2 < uVar4) {
      uVar7 = (ulong)uVar6;
      do {
        uVar4 = uVar4 - (uVar3 + 1);
        uVar5 = uVar5 + uVar3 + 1;
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulong)uVar6;
        uVar3 = (uint)(ushort)(*(ushort *)(this + uVar7 * 4 + 3) << 8 |
                              *(ushort *)(this + uVar7 * 4 + 3) >> 8);
      } while (uVar3 < uVar4);
    }
    if (param_3 != (uint *)0x0) {
      *param_3 = uVar6;
      param_3[1] = uVar5;
    }
    uVar2 = *(ushort *)(this + uVar7 * 4 + 1);
  }
  else {
    if (CVar1 != (Charset)0x1) {
      if (CVar1 != (Charset)0x0) {
        return 0;
      }
      if (param_1 == 0) {
        return 0;
      }
      if (param_1 < param_2) {
        return (uint)(ushort)(*(ushort *)(this + (ulong)(param_1 - 1) * 2 + 1) << 8 |
                             *(ushort *)(this + (ulong)(param_1 - 1) * 2 + 1) >> 8);
      }
      return 0;
    }
    if (param_2 <= param_1) {
      return 0;
    }
    if ((param_3 == (uint *)0x0) || (uVar5 = param_3[1], param_1 < uVar5)) {
      uVar5 = 1;
      uVar6 = 0;
      if (param_1 == 0) {
        return 0;
      }
    }
    else {
      uVar6 = *param_3;
    }
    uVar4 = param_1 - uVar5;
    uVar7 = (ulong)uVar6;
    uVar3 = (uint)(byte)this[uVar7 * 3 + 3];
    if ((byte)this[uVar7 * 3 + 3] < uVar4) {
      uVar7 = (ulong)uVar6;
      do {
        uVar4 = uVar4 - (uVar3 + 1);
        uVar5 = uVar5 + uVar3 + 1;
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulong)uVar6;
        uVar3 = (uint)(byte)this[uVar7 * 3 + 3];
      } while (uVar3 < uVar4);
    }
    if (param_3 != (uint *)0x0) {
      *param_3 = uVar6;
      param_3[1] = uVar5;
    }
    uVar2 = *(ushort *)(this + uVar7 * 3 + 1);
  }
  return uVar4 + (ushort)(uVar2 << 8 | uVar2 >> 8);
}


