// Function : iemgui_setdialogatoms
// Namespace: 
// Entry    : 00575ef0
// Prototype: undefined iemgui_setdialogatoms(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, uint param_10, undefined4 * param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14)
// Body     : 00575ef0 - 0057626d


void iemgui_setdialogatoms
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,uint param_10,undefined4 *param_11,undefined8 param_12,
               undefined8 param_13,undefined8 param_14)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  float fVar8;
  undefined4 uVar9;
  undefined1 in_stack_fffffffffffffbd8;
  char local_418 [999];
  undefined1 local_31;
  
  uVar9 = (undefined4)((ulong)param_2 >> 0x20);
  fVar8 = (float)*(int *)(*(long *)(param_9 + 0x30) + 0xec);
  if (0 < (int)param_10) {
    if ((ulong)param_10 - 1 < 3) {
      uVar4 = 0;
    }
    else {
      puVar7 = param_11 + 0xe;
      uVar4 = 0;
      do {
        puVar7[-0xe] = 1;
        puVar7[-0xc] = 0xbf800000;
        puVar7[-10] = 1;
        puVar7[-8] = 0xbf800000;
        puVar7[-6] = 1;
        puVar7[-4] = 0xbf800000;
        puVar7[-2] = 1;
        *puVar7 = 0xbf800000;
        uVar4 = uVar4 + 4;
        puVar7 = puVar7 + 0x10;
      } while ((param_10 & 0xfffffffc) != uVar4);
    }
    if ((ulong)(param_10 & 3) != 0) {
      lVar5 = 0;
      do {
        *(undefined4 *)((long)param_11 + lVar5 + uVar4 * 0x10) = 1;
        *(undefined4 *)((long)param_11 + lVar5 + uVar4 * 0x10 + 8) = 0xbf800000;
        lVar5 = lVar5 + 0x10;
      } while ((ulong)(param_10 & 3) * 0x10 != lVar5);
    }
  }
  if (iemgui_setdialogatoms_s_empty == (undefined8 *)0x0) {
    iemgui_setdialogatoms_s_empty = gensym("empty");
    uVar9 = 0;
  }
  puVar2 = *(undefined8 **)(param_9 + 0x470);
  if (*(undefined8 **)(param_9 + 0x470) == (undefined8 *)0x0) {
    puVar2 = iemgui_setdialogatoms_s_empty;
  }
  puVar6 = *(undefined8 **)(param_9 + 0x478);
  if (*(undefined8 **)(param_9 + 0x478) == (undefined8 *)0x0) {
    puVar6 = iemgui_setdialogatoms_s_empty;
  }
  puVar3 = *(undefined8 **)(param_9 + 0x480);
  if (*(undefined8 **)(param_9 + 0x480) == (undefined8 *)0x0) {
    puVar3 = iemgui_setdialogatoms_s_empty;
  }
  if (0 < (int)param_10) {
    *param_11 = 1;
    param_11[2] = (float)*(int *)(param_9 + 0x44) / fVar8;
    if (param_10 != 1) {
      param_11[4] = 1;
      param_11[6] = (float)*(int *)(param_9 + 0x40) / fVar8;
      if (5 < param_10) {
        param_11[0x14] = 1;
        param_11[0x16] = (float)(*(uint *)(param_9 + 0x448) & 1);
        if (param_10 != 6) {
          param_11[0x18] = 1;
          param_11[0x1a] = 0x3f800000;
          if (7 < param_10) {
            param_11[0x1c] = 2;
            *(undefined8 **)(param_11 + 0x1e) = puVar2;
            if (param_10 != 8) {
              param_11[0x20] = 2;
              *(undefined8 **)(param_11 + 0x22) = puVar6;
              if (9 < param_10) {
                param_11[0x24] = 2;
                *(undefined8 **)(param_11 + 0x26) = puVar3;
                if (param_10 != 10) {
                  param_11[0x28] = 1;
                  param_11[0x2a] = (float)*(int *)(param_9 + 0x50);
                  if (0xb < param_10) {
                    param_11[0x2c] = 1;
                    param_11[0x2e] = (float)*(int *)(param_9 + 0x54);
                    if (param_10 != 0xc) {
                      param_11[0x30] = 1;
                      param_11[0x32] = (float)(*(uint *)(param_9 + 0x440) & 0x3f);
                      if (0xd < param_10) {
                        param_11[0x34] = 1;
                        iVar1 = *(int *)(param_9 + 0x444);
                        param_11[0x36] = (float)iVar1;
                        if (param_10 != 0xe) {
                          pd_snprintf((ulong)(uint)(float)iVar1,CONCAT44(uVar9,fVar8),param_3,
                                      param_4,param_5,param_6,param_7,param_8,local_418,999,"#%06x",
                                      (ulong)(*(uint *)(param_9 + 0x450) & 0xffffff),param_13,
                                      param_14,in_stack_fffffffffffffbd8);
                          local_31 = 0;
                          param_11[0x38] = 2;
                          puVar2 = gensym(local_418);
                          *(undefined8 **)(param_11 + 0x3a) = puVar2;
                          if (0xf < param_10) {
                            pd_snprintf(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),
                                        CONCAT44(uVar9,fVar8),param_3,param_4,param_5,param_6,
                                        param_7,param_8,local_418,999,"#%06x",
                                        (ulong)(*(uint *)(param_9 + 0x44c) & 0xffffff),param_13,
                                        param_14,in_stack_fffffffffffffbd8);
                            local_31 = 0;
                            param_11[0x3c] = 2;
                            puVar2 = gensym(local_418);
                            *(undefined8 **)(param_11 + 0x3e) = puVar2;
                            if (param_10 != 0x10) {
                              pd_snprintf(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),
                                          CONCAT44(uVar9,fVar8),param_3,param_4,param_5,param_6,
                                          param_7,param_8,local_418,999,"#%06x",
                                          (ulong)(*(uint *)(param_9 + 0x454) & 0xffffff),param_13,
                                          param_14,in_stack_fffffffffffffbd8);
                              local_31 = 0;
                              param_11[0x40] = 2;
                              puVar2 = gensym(local_418);
                              *(undefined8 **)(param_11 + 0x42) = puVar2;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}


