// Function : text_size_bang
// Namespace: 
// Entry    : 00559090
// Prototype: undefined text_size_bang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, ulong param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, int * param_12, char * param_13, undefined8 param_14)
// Body     : 00559090 - 005591e9


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void text_size_bang(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   ulong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,undefined8 param_10,undefined8 param_11,int *param_12,char *param_13
                   ,undefined8 param_14)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint *puVar8;
  int iVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  puVar4 = (undefined4 *)
           text_client_getbuf(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              param_9,param_10,param_11,param_12,param_13,param_14);
  if (puVar4 == (undefined4 *)0x0) {
    return;
  }
  lVar5 = binbuf_getvec((long)puVar4);
  uVar3 = binbuf_getnatom(puVar4);
  if ((int)uVar3 < 1) {
    iVar9 = 0;
  }
  else {
    if (uVar3 < 9) {
      lVar7 = 0;
      iVar9 = 0;
    }
    else {
      uVar10 = 8;
      if ((ulong)(uVar3 & 7) != 0) {
        uVar10 = (ulong)(uVar3 & 7);
      }
      lVar7 = uVar3 - uVar10;
      puVar4 = (undefined4 *)(lVar5 + 0x70);
      iVar9 = 0;
      iVar11 = 0;
      iVar12 = 0;
      iVar13 = 0;
      param_3 = (undefined8)DAT_0065a030;
      param_4 = (undefined8)DAT_00652d80;
      iVar14 = 0;
      iVar15 = 0;
      iVar16 = 0;
      iVar17 = 0;
      lVar6 = lVar7;
      do {
        auVar18._12_4_ = puVar4[-0x10];
        auVar18._8_4_ = puVar4[-0x14];
        auVar18._4_4_ = puVar4[-0x18];
        auVar18._0_4_ = puVar4[-0x1c];
        param_6 = CONCAT44(*puVar4,puVar4[-4]);
        param_5 = (ulong)(uint)puVar4[-8];
        auVar19._4_4_ = puVar4[-8];
        auVar19._0_4_ = puVar4[-0xc];
        auVar19._8_8_ = param_6;
        auVar18 = auVar18 & _DAT_0065a030;
        auVar19 = auVar19 & _DAT_0065a030;
        uVar1 = (uint)(auVar18._0_4_ == (int)DAT_00652d80);
        uVar2 = (uint)(auVar18._4_4_ == DAT_00652d80._4_4_);
        param_7 = CONCAT44(-uVar2,-uVar1);
        iVar9 = iVar9 + uVar1;
        iVar11 = iVar11 + uVar2;
        iVar12 = iVar12 + (uint)(auVar18._8_4_ == DAT_00652d80._8_4_);
        iVar13 = iVar13 + (uint)(auVar18._12_4_ == DAT_00652d80._12_4_);
        uVar1 = (uint)(auVar19._0_4_ == (int)DAT_00652d80);
        uVar2 = (uint)(auVar19._4_4_ == DAT_00652d80._4_4_);
        param_8 = CONCAT44(-uVar2,-uVar1);
        iVar14 = iVar14 + uVar1;
        iVar15 = iVar15 + uVar2;
        iVar16 = iVar16 + (uint)(auVar19._8_4_ == DAT_00652d80._8_4_);
        iVar17 = iVar17 + (uint)(auVar19._12_4_ == DAT_00652d80._12_4_);
        puVar4 = puVar4 + 0x20;
        lVar6 = lVar6 + -8;
      } while (lVar6 != 0);
      iVar11 = iVar17 + iVar13 + iVar15 + iVar11;
      iVar9 = iVar11 + iVar16 + iVar12 + iVar14 + iVar9;
      param_2 = CONCAT44(iVar11 * 2,iVar9);
    }
    lVar6 = (ulong)uVar3 - lVar7;
    puVar8 = (uint *)(lVar7 * 0x10 + lVar5);
    do {
      iVar9 = iVar9 + (uint)((*puVar8 & 0xfffffffe) == 4);
      puVar8 = puVar8 + 4;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if (uVar3 != 0) {
    iVar9 = iVar9 + (uint)((*(uint *)((long)(int)uVar3 * 0x10 + -0x10 + lVar5) & 0xfffffffe) != 4);
  }
  outlet_float((ulong)(uint)(float)iVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               *(long **)(param_9 + 0x60));
  return;
}


