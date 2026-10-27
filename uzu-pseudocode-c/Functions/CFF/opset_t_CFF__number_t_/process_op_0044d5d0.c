// Function : process_op
// Namespace: CFF:opset_t_CFF__number_t_
// Entry    : 0044d5d0
// Prototype: undefined process_op(int param_1, long * param_2)
// Body     : 0044d5d0 - 0044d7ac


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* CFF::opset_t<CFF::number_t>::process_op(unsigned int, CFF::interp_env_t<CFF::number_t>&) */

void __cdecl CFF::opset_t<CFF::number_t>::process_op(int param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  uint uVar7;
  double *pdVar8;
  
  if (param_1 - 0xf7U < 4) {
    uVar7 = *(uint *)((long)param_2 + 0xc);
    if (uVar7 < *(uint *)(param_2 + 1)) {
      pbVar5 = (byte *)(*param_2 + (ulong)uVar7);
    }
    else {
      uVar7 = *(uint *)(param_2 + 1) + 1;
      pbVar5 = (byte *)&_hb_NullPool;
    }
    iVar4 = (int)(short)(((short)param_1 * 0x100 + 0x900U | (ushort)*pbVar5) + 0x6c);
  }
  else {
    if (3 < param_1 - 0xfbU) {
      if (param_1 == 0x1c) {
        uVar3 = *(uint *)(param_2 + 1);
        uVar7 = *(uint *)((long)param_2 + 0xc);
        if (uVar7 < uVar3) {
          puVar6 = (undefined4 *)(*param_2 + (ulong)uVar7);
        }
        else {
          uVar7 = uVar3 + 1;
          *(uint *)((long)param_2 + 0xc) = uVar7;
          puVar6 = &_hb_NullPool;
        }
        uVar1 = *(undefined1 *)puVar6;
        if (uVar7 + 1 < uVar3) {
          puVar6 = (undefined4 *)((ulong)(uVar7 + 1) + *param_2);
        }
        else {
          uVar7 = uVar3 + 1;
          puVar6 = &_hb_NullPool;
        }
        uVar2 = *(undefined1 *)puVar6;
        uVar3 = *(uint *)((long)param_2 + 0x14);
        if ((ulong)uVar3 < 0x201) {
          *(uint *)((long)param_2 + 0x14) = uVar3 + 1;
          pdVar8 = (double *)(param_2 + (ulong)uVar3 + 3);
        }
        else {
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0.0;
          pdVar8 = &_hb_CrapPool;
        }
        *pdVar8 = (double)(int)CONCAT11(uVar1,uVar2);
        *(uint *)((long)param_2 + 0xc) = uVar7 + 2;
        return;
      }
      if (0xd6 < param_1 - 0x20U) {
        *(undefined4 *)((long)param_2 + 0x14) = 0;
        return;
      }
      uVar7 = *(uint *)((long)param_2 + 0x14);
      if ((ulong)uVar7 < 0x201) {
        *(uint *)((long)param_2 + 0x14) = uVar7 + 1;
        param_2[(ulong)uVar7 + 3] = (long)(double)(param_1 + -0x8b);
        return;
      }
      *(undefined1 *)(param_2 + 2) = 1;
      _hb_CrapPool = (double)(param_1 + -0x8b);
      return;
    }
    uVar7 = *(uint *)((long)param_2 + 0xc);
    if (uVar7 < *(uint *)(param_2 + 1)) {
      pbVar5 = (byte *)(*param_2 + (ulong)uVar7);
    }
    else {
      uVar7 = *(uint *)(param_2 + 1) + 1;
      pbVar5 = (byte *)&_hb_NullPool;
    }
    iVar4 = -0x6c - (param_1 * 0x10000 - 0xfb0000U >> 8 | (uint)*pbVar5);
  }
  uVar3 = *(uint *)((long)param_2 + 0x14);
  if ((ulong)uVar3 < 0x201) {
    *(uint *)((long)param_2 + 0x14) = uVar3 + 1;
    pdVar8 = (double *)(param_2 + (ulong)uVar3 + 3);
  }
  else {
    *(undefined1 *)(param_2 + 2) = 1;
    _hb_CrapPool = 0.0;
    pdVar8 = &_hb_CrapPool;
  }
  *pdVar8 = (double)iVar4;
  *(uint *)((long)param_2 + 0xc) = uVar7 + 1;
  return;
}


