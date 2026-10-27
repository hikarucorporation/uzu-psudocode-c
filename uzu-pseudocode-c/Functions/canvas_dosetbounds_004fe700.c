// Function : canvas_dosetbounds
// Namespace: 
// Entry    : 004fe700
// Prototype: undefined canvas_dosetbounds(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, long * param_10, ulong param_11, undefined * param_12, undefined * param_13, undefined * param_14, undefined1 param_15)
// Body     : 004fe700 - 004fe7e5


void canvas_dosetbounds(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       long *param_9,long *param_10,ulong param_11,undefined *param_12,
                       undefined *param_13,undefined *param_14,undefined1 param_15)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  int iVar6;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  long *plVar7;
  float fVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  ulong uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  
  uVar15 = (undefined4)((ulong)param_4 >> 0x20);
  uVar13 = (undefined4)((ulong)param_3 >> 0x20);
  iVar4 = (int)param_13;
  iVar1 = *(int *)((long)param_9 + 0x74);
  iVar2 = *(int *)((long)param_9 + 0x6c);
  iVar6 = (int)param_11;
  if (((((int)param_9[0xd] != (int)param_10) || (iVar2 != iVar6)) ||
      ((int)param_9[0xe] != (int)param_12)) || (iVar1 != iVar4)) {
    *(int *)(param_9 + 0xd) = (int)param_10;
    *(int *)((long)param_9 + 0x6c) = iVar6;
    *(int *)(param_9 + 0xe) = (int)param_12;
    *(int *)((long)param_9 + 0x74) = iVar4;
    if ((*(byte *)((long)param_9 + 0xe9) & 3) == 0) {
      fVar10 = *(float *)((long)param_9 + 100);
      uVar11 = 0;
      if (fVar10 < *(float *)((long)param_9 + 0x5c)) {
        fVar14 = (float)*(int *)((long)param_9 + 0xec);
        fVar8 = *(float *)((long)param_9 + 0x5c) - fVar10;
        uVar9 = (ulong)(uint)fVar8;
        fVar12 = ((float)(iVar4 - iVar6) * fVar8) / fVar14;
        *(float *)((long)param_9 + 0x5c) = fVar12;
        fVar12 = fVar12 - fVar8;
        *(float *)((long)param_9 + 100) = fVar12;
        plVar7 = (long *)param_9[6];
        if (plVar7 != (long *)0x0) {
          do {
            plVar5 = pd_checkobject(plVar7);
            param_11 = extraout_RDX;
            uVar9 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
            if (plVar5 != (long *)0x0) {
              lVar3 = (long)(((iVar4 - iVar6) - iVar1) + iVar2);
              param_11 = lVar3 % (long)*(int *)((long)param_9 + 0xec) & 0xffffffff;
              param_12 = *(undefined **)(*plVar7 + 0x68);
              uVar9 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
              if ((param_12 != (undefined *)0x0) &&
                 (param_13 = *(undefined **)(param_12 + 8),
                 uVar9 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),
                 (code *)param_13 != (code *)0x0)) {
                param_12 = (undefined *)(lVar3 / (long)*(int *)((long)param_9 + 0xec) & 0xffffffff);
                param_10 = param_9;
                uVar9 = (*(code *)param_13)(plVar7,param_9,0);
                param_11 = extraout_RDX_00;
              }
            }
            plVar7 = (long *)plVar7[1];
          } while (plVar7 != (long *)0x0);
        }
        canvas_redraw(uVar9,CONCAT44(uVar11,fVar10),CONCAT44(uVar13,fVar12),CONCAT44(uVar15,fVar14),
                      param_5,param_6,param_7,param_8,param_9,(char *)param_10,param_11,param_12,
                      param_13,param_14,param_15);
        return;
      }
    }
  }
  return;
}


