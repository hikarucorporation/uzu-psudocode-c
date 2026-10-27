// Function : deflate_huff
// Namespace: juce:zlibNamespace
// Entry    : 004b5ab0
// Prototype: int deflate_huff(long * param_1, int param_2)
// Body     : 004b5ab0 - 004b5cb9


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::zlibNamespace::deflate_huff(juce::zlibNamespace::internal_state*, int) */

int __cdecl juce::zlibNamespace::deflate_huff(long *param_1,int param_2)

{
  short *psVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  
  do {
    iVar5 = *(int *)((long)param_1 + 0xb4);
    do {
      if ((iVar5 == 0) && (fill_window(param_1), *(int *)((long)param_1 + 0xb4) == 0)) {
        if (param_2 == 0) {
          return 0;
        }
        *(undefined4 *)((long)param_1 + 0x172c) = 0;
        if (param_2 == 4) {
          uVar3 = param_1[0x13];
          if ((long)uVar3 < 0) {
            pvVar6 = (void *)0x0;
          }
          else {
            pvVar6 = (void *)((uVar3 & 0xffffffff) + param_1[0xc]);
          }
          _tr_flush_block(param_1,pvVar6,*(uint *)((long)param_1 + 0xac) - uVar3,1);
          param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
          flush_pending(*param_1);
          return 3 - (uint)(*(int *)(*param_1 + 0x20) == 0);
        }
        if (*(int *)((long)param_1 + 0x170c) != 0) {
          uVar3 = param_1[0x13];
          if ((long)uVar3 < 0) {
            pvVar6 = (void *)0x0;
          }
          else {
            pvVar6 = (void *)((uVar3 & 0xffffffff) + param_1[0xc]);
          }
          _tr_flush_block(param_1,pvVar6,*(uint *)((long)param_1 + 0xac) - uVar3,0);
          param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
          flush_pending(*param_1);
          if (*(int *)(*param_1 + 0x20) == 0) {
            return 0;
          }
        }
        return 1;
      }
      *(undefined4 *)(param_1 + 0x14) = 0;
      bVar2 = *(byte *)(param_1[0xc] + (ulong)*(uint *)((long)param_1 + 0xac));
      uVar4 = *(uint *)((long)param_1 + 0x170c);
      *(uint *)((long)param_1 + 0x170c) = uVar4 + 1;
      *(undefined1 *)(param_1[0x2e0] + (ulong)uVar4) = 0;
      uVar4 = *(uint *)((long)param_1 + 0x170c);
      *(uint *)((long)param_1 + 0x170c) = uVar4 + 1;
      *(undefined1 *)(param_1[0x2e0] + (ulong)uVar4) = 0;
      uVar4 = *(uint *)((long)param_1 + 0x170c);
      *(uint *)((long)param_1 + 0x170c) = uVar4 + 1;
      *(byte *)(param_1[0x2e0] + (ulong)uVar4) = bVar2;
      psVar1 = (short *)((long)param_1 + (ulong)bVar2 * 4 + 0xd4);
      *psVar1 = *psVar1 + 1;
      iVar5 = *(int *)((long)param_1 + 0xb4) + -1;
      uVar4 = *(int *)((long)param_1 + 0xac) + 1;
      *(int *)((long)param_1 + 0xb4) = iVar5;
      *(uint *)((long)param_1 + 0xac) = uVar4;
    } while (*(int *)((long)param_1 + 0x170c) != (int)param_1[0x2e2]);
    uVar3 = param_1[0x13];
    if ((long)uVar3 < 0) {
      pvVar6 = (void *)0x0;
    }
    else {
      pvVar6 = (void *)((uVar3 & 0xffffffff) + param_1[0xc]);
    }
    _tr_flush_block(param_1,pvVar6,uVar4 - uVar3,0);
    param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
    flush_pending(*param_1);
    if (*(int *)(*param_1 + 0x20) == 0) {
      return 0;
    }
  } while( true );
}


