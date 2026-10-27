// Function : canvas_map
// Namespace: 
// Entry    : 004fef90
// Prototype: undefined canvas_map(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, char * param_10, undefined8 param_11, undefined * param_12, char * param_13, undefined * param_14, undefined1 param_15)
// Body     : 004fef90 - 004ff35b


void canvas_map(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long *param_9,char *param_10,undefined8 param_11,undefined *param_12,char *param_13,
               undefined *param_14,undefined1 param_15)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  ushort uVar5;
  long lVar6;
  undefined7 extraout_var;
  undefined8 *puVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  long *plVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined8 uVar12;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Db_07;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 in_stack_fffffffffffffe98;
  long *local_130;
  undefined8 local_128;
  undefined4 local_120;
  long local_110;
  uint local_d8;
  undefined4 local_d4;
  undefined8 local_c8;
  undefined4 local_c0;
  char local_b8 [136];
  
  uVar14 = 0;
  uVar15 = 0;
  uVar5 = *(ushort *)(param_9 + 0x1d);
  if ((float)param_1 == 0.0) {
    if (((uVar5 & 8) == 0) &&
       (lVar6 = glist_getcanvas((long)param_9), (*(byte *)(lVar6 + 0xe8) & 2) != 0)) {
      if ((*(byte *)(param_9 + 0x1d) & 1) == 0) {
        bug(CONCAT44(extraout_XMM0_Db_07,extraout_XMM0_Da_07),CONCAT44(uVar15,uVar14),param_3,
            param_4,param_5,param_6,param_7,param_8,"canvas_map",param_10,extraout_RDX_01,param_12,
            param_13,param_14,param_15);
        return;
      }
      pdgui_vmess(CONCAT44(extraout_XMM0_Db_07,extraout_XMM0_Da_07),CONCAT44(uVar15,uVar14),param_3,
                  param_4,param_5,param_6,param_7,param_8,0,"crs",param_9,"delete","all",param_14,
                  in_stack_fffffffffffffe98);
      *(byte *)(param_9 + 0x1d) = *(byte *)(param_9 + 0x1d) & 0xfd;
    }
  }
  else {
    if ((uVar5 & 8) == 0) {
      lVar6 = glist_getcanvas((long)param_9);
      param_1 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
      if ((*(byte *)(lVar6 + 0xe8) & 2) != 0) {
        return;
      }
      uVar5 = *(ushort *)(param_9 + 0x1d);
      param_11 = extraout_RDX;
    }
    if ((uVar5 & 1) == 0) {
      bug(param_1,CONCAT44(uVar15,uVar14),param_3,param_4,param_5,param_6,param_7,param_8,
          "canvas_map",param_10,param_11,param_12,param_13,param_14,in_stack_fffffffffffffe98);
      canvas_vis((ulong)DAT_005d9038,CONCAT44(uVar15,uVar14),param_3,param_4,param_5,param_6,param_7
                 ,param_8,param_9,param_10,extraout_RDX_00,param_12,param_13,param_14,
                 in_stack_fffffffffffffe98);
      param_1 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
    }
    for (plVar10 = (long *)param_9[6]; plVar10 != (long *)0x0; plVar10 = (long *)plVar10[1]) {
      if ((*(long *)(*plVar10 + 0x68) != 0) && (*(long *)(*(long *)(*plVar10 + 0x68) + 0x28) != 0))
      {
        bVar4 = gobj_shouldvis(plVar10,param_9);
        param_1 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
        if ((int)CONCAT71(extraout_var,bVar4) != 0) {
          param_1 = (**(code **)(*(long *)(*plVar10 + 0x68) + 0x28))(plVar10,param_9,1);
        }
      }
    }
    *(ushort *)(param_9 + 0x1d) = (ushort)param_9[0x1d] | 2;
    pcVar9 = (char *)param_9[0x18];
    puVar7 = *(undefined8 **)(pcVar9 + 0x20);
    if (puVar7 != (undefined8 *)0x0) {
      do {
        lVar6 = *(long *)(*(long *)*puVar7 + 0x68);
        if ((lVar6 != 0) && (pcVar2 = *(code **)(lVar6 + 0x10), pcVar2 != (code *)0x0)) {
          param_1 = (*pcVar2)((long *)*puVar7,param_9,1);
        }
        do {
          puVar7 = (undefined8 *)puVar7[1];
          if (puVar7 == (undefined8 *)0x0) goto LAB_004ff0b7;
        } while ((*(ushort *)(param_9 + 0x1d) & 2) == 0);
      } while( true );
    }
LAB_004ff0b7:
    local_128 = 0;
    local_c8 = 0;
    local_120 = 0;
    local_c0 = 0;
    local_130 = param_9;
    puVar7 = linetraverser_next(param_1,CONCAT44(uVar15,uVar14),param_3,param_4,param_5,param_6,
                                param_7,param_8,(long *)&local_130);
    uVar11 = extraout_XMM0_Da_02;
    uVar13 = extraout_XMM0_Db_02;
    while (puVar7 != (undefined8 *)0x0) {
      sprintf(local_b8,"l%p",puVar7);
      uVar8 = glist_getcanvas((long)param_9);
      uVar11 = local_d4;
      uVar3 = local_d8;
      outlet_getsymbol(local_110);
      uVar12 = __tls_get_addr();
      pcVar9 = "create";
      param_13 = "line";
      param_14 = (undefined *)(ulong)uVar3;
      pdgui_vmess(uVar12,CONCAT44(uVar15,uVar14),param_3,param_4,param_5,param_6,param_7,param_8,0,
                  "crr iiii ri rS",uVar8,"create","line",param_14,(char)uVar11);
      puVar7 = linetraverser_next(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),
                                  CONCAT44(uVar15,uVar14),param_3,param_4,param_5,param_6,param_7,
                                  param_8,(long *)&local_130);
      uVar11 = extraout_XMM0_Da_04;
      uVar13 = extraout_XMM0_Db_04;
    }
    if ((~*(uint *)(param_9 + 0x1d) & 0x180) == 0) {
      iVar1 = *(int *)((long)param_9 + 0xec);
      lVar6 = param_9[0xf];
      uVar11 = *(undefined4 *)((long)param_9 + 0x7c);
      uVar8 = glist_getcanvas((long)param_9);
      pcVar9 = "create";
      param_13 = "line";
      param_14 = (undefined *)(ulong)(uint)((int)lVar6 * iVar1);
      pdgui_vmess(CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_05),CONCAT44(uVar15,uVar14),param_3,
                  param_4,param_5,param_6,param_7,param_8,0,"crr iiiiiiiiii rr ri rr rr",uVar8,
                  "create","line",param_14,(char)uVar11 * (char)iVar1);
      uVar11 = extraout_XMM0_Da_06;
      uVar13 = extraout_XMM0_Db_06;
    }
    pdgui_vmess(CONCAT44(uVar13,uVar11),CONCAT44(uVar15,uVar14),param_3,param_4,param_5,param_6,
                param_7,param_8,0x654044,"c",param_9,pcVar9,param_13,param_14,
                in_stack_fffffffffffffe98);
  }
  return;
}


