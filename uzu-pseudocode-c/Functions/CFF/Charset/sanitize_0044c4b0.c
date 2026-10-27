// Function : sanitize
// Namespace: CFF:Charset
// Entry    : 0044c4b0
// Prototype: ulong sanitize(Charset * this, long param_1, uint * param_2)
// Body     : 0044c4b0 - 0044c5e9


/* CFF::Charset::sanitize(hb_sanitize_context_t*, unsigned int*) const */

ulong __thiscall CFF::Charset::sanitize(Charset *this,long param_1,uint *param_2)

{
  Charset CVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  Charset *pCVar5;
  ulong uVar6;
  uint7 uVar7;
  int iVar8;
  uint uVar9;
  
  pCVar5 = this + (1 - *(long *)(param_1 + 8));
  if ((Charset *)(ulong)*(uint *)(param_1 + 0x18) < pCVar5) {
    return 0;
  }
  CVar1 = *this;
  uVar3 = 0;
  if (CVar1 == (Charset)0x2) {
    uVar9 = *(int *)(param_1 + 0x38) - 1;
    if (uVar9 != 0) {
      uVar3 = 0;
      do {
        if ((Charset *)(ulong)*(uint *)(param_1 + 0x18) <
            this + ((ulong)uVar3 * 4 - *(long *)(param_1 + 8)) + 5) {
          return 0;
        }
        uVar2 = *(ushort *)(this + (ulong)uVar3 * 4 + 3) << 8 |
                *(ushort *)(this + (ulong)uVar3 * 4 + 3) >> 8;
        if (uVar9 <= uVar2) {
          return 0;
        }
        uVar4 = ~(uint)uVar2;
        pCVar5 = (Charset *)(ulong)uVar4;
        uVar3 = uVar3 + 1;
        uVar9 = uVar9 + uVar4;
      } while (uVar9 != 0);
    }
    uVar6 = CONCAT71((int7)((ulong)pCVar5 >> 8),1);
    if (param_2 != (uint *)0x0) {
      *param_2 = uVar3;
    }
  }
  else if (CVar1 == (Charset)0x1) {
    uVar3 = *(int *)(param_1 + 0x38) - 1;
    if (uVar3 == 0) {
      uVar9 = 0;
      uVar7 = (uint7)((ulong)pCVar5 >> 8);
    }
    else {
      uVar9 = 0;
      do {
        if ((Charset *)(ulong)*(uint *)(param_1 + 0x18) <
            this + ((ulong)uVar9 * 3 - *(long *)(param_1 + 8)) + 4) {
          return 0;
        }
        if (uVar3 <= (byte)this[(ulong)uVar9 * 3 + 3]) {
          return 0;
        }
        uVar4 = ~(uint)(byte)this[(ulong)uVar9 * 3 + 3];
        uVar9 = uVar9 + 1;
        uVar3 = uVar3 + uVar4;
      } while (uVar3 != 0);
      uVar7 = (uint7)(uint3)(uVar4 >> 8);
    }
    uVar6 = CONCAT71(uVar7,1);
    if (param_2 != (uint *)0x0) {
      *param_2 = uVar9;
      return uVar6;
    }
  }
  else {
    uVar6 = 0;
    if (CVar1 == (Charset)0x0) {
      uVar3 = *(uint *)(param_1 + 0x38);
      if (param_2 != (uint *)0x0) {
        *param_2 = uVar3;
      }
      uVar3 = uVar3 - 1;
      if (CARRY4(uVar3,uVar3)) {
        return 0;
      }
      if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)(this + 1) - *(long *)(param_1 + 8))) {
        return 0;
      }
      if ((uint)(*(int *)(param_1 + 0x10) - (int)(this + 1)) < uVar3 * 2) {
        return 0;
      }
      iVar8 = *(int *)(param_1 + 0x1c) + uVar3 * -2;
      *(int *)(param_1 + 0x1c) = iVar8;
      return (ulong)CONCAT31((int3)(uVar3 * 2 >> 8),0 < iVar8);
    }
  }
  return uVar6;
}


