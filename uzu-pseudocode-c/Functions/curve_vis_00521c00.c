// Function : curve_vis
// Namespace: 
// Entry    : 00521c00
// Prototype: undefined curve_vis(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, long param_11, long param_12, char * param_13, undefined8 param_14)
// Body     : 00521c00 - 00522175


void curve_vis(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              long param_9,long param_10,long param_11,long param_12,char *param_13,
              undefined8 param_14)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  float *pfVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  char *pcVar10;
  long lVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 in_stack_fffffffffffff898;
  float local_764;
  char local_718 [80];
  char local_6c8 [80];
  float local_678 [402];
  
  fVar14 = (float)param_2;
  uVar12 = *(uint *)(param_9 + 0xd8);
  if ((int)param_13 == 0) {
    sprintf(local_6c8,"curve%p",(void *)param_9);
    sprintf(local_718,"curve%p_data%p",(void *)param_9,(void *)param_11);
    if (1 < (int)uVar12) {
      uVar7 = glist_getcanvas(param_10);
      pdgui_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs",
                  uVar7,"delete",local_718,param_14,in_stack_fffffffffffff898);
    }
  }
  else if (*(char *)(param_9 + 0xb0) == '\x01') {
    pfVar5 = (float *)(param_9 + 0xb8);
    if (*(char *)(param_9 + 0xb1) == '\0') {
LAB_00521d45:
      uVar15 = 0;
      uVar16 = 0;
      if (*pfVar5 != 0.0) {
        sprintf(local_6c8,"curve%p",(void *)param_9);
        sprintf(local_718,"curve%p_data%p",(void *)param_9,(void *)param_11);
        if ((int)uVar12 < 2) {
          post(extraout_XMM0_Qa_00,param_2,CONCAT44(uVar16,uVar15),param_4,param_5,param_6,param_7,
               param_8,"warning: drawing shapes need at least two points to be graphed");
        }
        else {
          uVar1 = *(uint *)(param_9 + 0x30);
          local_764 = (float)fielddesc_getfloat(extraout_XMM0_Qa_00,param_2,CONCAT44(uVar16,uVar15),
                                                param_4,param_5,param_6,param_7,param_8,
                                                (char *)(param_9 + 0x88),param_12,param_11,1,
                                                param_13,param_14);
          uVar7 = CONCAT44(extraout_XMM0_Db,local_764);
          uVar3 = 100;
          if (uVar12 < 100) {
            uVar3 = (ulong)uVar12;
          }
          pcVar10 = *(char **)(param_9 + 0xe0);
          lVar9 = 0;
          do {
            uVar6 = 1;
            lVar11 = param_12;
            fVar13 = fielddesc_getcoord(uVar7,param_2,CONCAT44(uVar16,uVar15),param_4,param_5,
                                        param_6,param_7,param_8,pcVar10,param_12,param_11,1,param_13
                                        ,param_14);
            fVar13 = glist_xtopixels(CONCAT44(extraout_XMM0_Db_00,fVar13 + (float)param_1),param_2,
                                     CONCAT44(uVar16,uVar15),param_4,param_5,param_6,param_7,param_8
                                     ,param_10,lVar11,extraout_RDX,uVar6,param_13,param_14);
            *(float *)((long)local_678 + lVar9) = fVar13;
            uVar7 = 1;
            lVar11 = param_12;
            fVar13 = fielddesc_getcoord(CONCAT44(extraout_XMM0_Db_01,fVar13),param_2,
                                        CONCAT44(uVar16,uVar15),param_4,param_5,param_6,param_7,
                                        param_8,pcVar10 + 0x28,param_12,param_11,1,param_13,param_14
                                       );
            fVar13 = glist_ytopixels(CONCAT44(extraout_XMM0_Db_02,fVar13 + fVar14),param_2,
                                     CONCAT44(uVar16,uVar15),param_4,param_5,param_6,param_7,param_8
                                     ,param_10,lVar11,extraout_RDX_00,uVar7,param_13,param_14);
            uVar7 = CONCAT44(extraout_XMM0_Db_03,fVar13);
            *(float *)((long)local_678 + lVar9 + 8) = fVar13;
            lVar9 = lVar9 + 0x10;
            pcVar10 = pcVar10 + 0x50;
          } while (uVar3 * 0x10 != lVar9);
          if (local_764 <= DAT_005d9038) {
            local_764 = DAT_005d9038;
          }
          fVar14 = local_764;
          if ((*(byte *)(param_10 + 0xe9) & 1) != 0) {
            iVar2 = glist_getzoom(param_10);
            fVar14 = (float)iVar2;
            local_764 = local_764 * fVar14;
            param_2 = (ulong)(uint)local_764;
          }
          fVar14 = (float)fielddesc_getfloat((ulong)(uint)fVar14,param_2,CONCAT44(uVar16,uVar15),
                                             param_4,param_5,param_6,param_7,param_8,
                                             (char *)(param_9 + 0x60),param_12,param_11,1,param_13,
                                             param_14);
          uVar8 = (ulong)(uint)(int)fVar14;
          if ((int)fVar14 < 0) {
            uVar8 = 0;
          }
          iVar2 = (int)uVar8 + (int)(uVar8 / 10) * -10;
          uVar12 = iVar2 * 0x20;
          if (iVar2 == 9) {
            uVar12 = 0x100;
          }
          if (0xfe < uVar12) {
            uVar12 = 0xff;
          }
          uVar7 = glist_getcanvas(param_10);
          pcVar10 = "polygon";
          if ((uVar1 & 1) == 0) {
            pcVar10 = "line";
          }
          pdgui_vmess((double)local_764,param_2,CONCAT44(uVar16,uVar15),param_4,param_5,param_6,
                      param_7,param_8,0,"crr iiii rf ri rS",uVar7,"create",pcVar10,0,0);
          uVar7 = glist_getcanvas(param_10);
          uVar3 = (ulong)(uint)((int)uVar3 * 2);
          pcVar10 = local_718;
          pdgui_vmess(extraout_XMM0_Qa_01,param_2,CONCAT44(uVar16,uVar15),param_4,param_5,param_6,
                      param_7,param_8,0,"crs w",uVar7,"coords",pcVar10,uVar3,(char)local_678);
          if ((uVar1 & 1) == 0) {
            uVar7 = glist_getcanvas(param_10);
            pdgui_vmess(extraout_XMM0_Qa_03,param_2,CONCAT44(uVar16,uVar15),param_4,param_5,param_6,
                        param_7,param_8,0,"crs rk",uVar7,"itemconfigure",local_718,"-fill",
                        (char)uVar12);
          }
          else {
            fVar14 = (float)fielddesc_getfloat(extraout_XMM0_Qa_02,param_2,CONCAT44(uVar16,uVar15),
                                               param_4,param_5,param_6,param_7,param_8,
                                               (char *)(param_9 + 0x38),param_12,param_11,1,pcVar10,
                                               uVar3);
            uVar3 = (ulong)(uint)(int)fVar14;
            if ((int)fVar14 < 0) {
              uVar3 = 0;
            }
            iVar2 = (int)uVar3 + (int)(uVar3 / 10) * -10;
            uVar12 = iVar2 * 0x20;
            if (iVar2 == 9) {
              uVar12 = 0x100;
            }
            if (0xfe < uVar12) {
              uVar12 = 0xff;
            }
            uVar7 = glist_getcanvas(param_10);
            pdgui_vmess(extraout_XMM0_Qa_04,param_2,CONCAT44(uVar16,uVar15),param_4,param_5,param_6,
                        param_7,param_8,0,"crs rk rk",uVar7,"itemconfigure",local_718,"-fill",
                        (char)uVar12);
          }
        }
      }
    }
    else if (param_12 == 0) {
      bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"template_find_field",
          param_10,param_11,pfVar5,param_13,param_14,in_stack_fffffffffffff898);
    }
    else if (0 < (int)*(uint *)(param_12 + 0x18)) {
      plVar4 = (long *)(*(long *)(param_12 + 0x20) + 8);
      lVar9 = 0;
      do {
        if (*plVar4 == *(long *)pfVar5) {
          if ((int)plVar4[-1] != 0) {
            return;
          }
          pfVar5 = (float *)((int)lVar9 + param_11);
          goto LAB_00521d45;
        }
        lVar9 = lVar9 + 8;
        plVar4 = plVar4 + 3;
      } while ((ulong)*(uint *)(param_12 + 0x18) * 8 != lVar9);
    }
  }
  return;
}


