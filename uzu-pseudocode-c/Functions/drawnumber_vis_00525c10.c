// Function : drawnumber_vis
// Namespace: 
// Entry    : 00525c10
// Prototype: undefined drawnumber_vis(ulong param_1, ulong param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, long param_11, long param_12, char * param_13, undefined8 param_14)
// Body     : 00525c10 - 005260b6


void drawnumber_vis(ulong param_1,ulong param_2,undefined8 param_3,ulong param_4,ulong param_5,
                   undefined8 param_6,ulong param_7,undefined8 param_8,long param_9,long param_10,
                   long param_11,long param_12,char *param_13,undefined8 param_14)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  float *pfVar6;
  long lVar7;
  long *extraout_RDX;
  long *extraout_RDX_00;
  long *extraout_RDX_01;
  long *extraout_RDX_02;
  undefined8 extraout_RDX_03;
  char *pcVar8;
  char *pcVar9;
  undefined4 extraout_XMM0_Da;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  float fVar13;
  float fVar14;
  ulong uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 in_stack_fffffffffffffb28;
  char local_488 [80];
  char local_438 [1032];
  
  fVar13 = (float)param_2;
  fVar19 = (float)param_1;
  if ((int)param_13 == 0) {
    sprintf(local_488,"drawnumber%p",(void *)param_11);
    uVar4 = glist_getcanvas(param_10);
    pdgui_vmess(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
                param_7,param_8,0,"crs",uVar4,"delete",local_488,param_14,in_stack_fffffffffffffb28)
    ;
  }
  else if (*(char *)(param_9 + 0xb0) == '\x01') {
    pfVar6 = (float *)(param_9 + 0xb8);
    if (*(char *)(param_9 + 0xb1) == '\0') {
LAB_00525d10:
      fVar16 = 0.0;
      uVar17 = 0;
      if (*pfVar6 != 0.0) {
        pcVar8 = "drawnumber%p";
        uVar15 = param_2;
        sprintf(local_488,"drawnumber%p",(void *)param_11);
        fVar10 = 0.0;
        plVar5 = extraout_RDX;
        if (*(char *)(param_9 + 0x38) == '\x01') {
          if (*(char *)(param_9 + 0x39) == '\0') {
            fVar10 = *(float *)(param_9 + 0x40);
          }
          else {
            if (param_12 == 0) {
              bug(0,uVar15,CONCAT44(uVar17,fVar16),param_4,param_5,param_1 & 0xffffffff,param_7,
                  param_8,"template_find_field",pcVar8,extraout_RDX,pfVar6,param_13,param_14,
                  in_stack_fffffffffffffb28);
              fVar10 = 0.0;
              plVar5 = extraout_RDX_00;
            }
            else {
              fVar10 = 0.0;
              if (0 < (int)*(uint *)(param_12 + 0x18)) {
                pcVar8 = *(char **)(param_9 + 0x40);
                plVar5 = (long *)(*(long *)(param_12 + 0x20) + 8);
                pfVar6 = (float *)0x0;
                do {
                  if ((char *)*plVar5 == pcVar8) {
                    if ((int)plVar5[-1] == 0) {
                      fVar10 = *(float *)(param_11 + (int)pfVar6);
                    }
                    break;
                  }
                  pfVar6 = pfVar6 + 2;
                  plVar5 = plVar5 + 3;
                } while ((float *)((ulong)*(uint *)(param_12 + 0x18) * 8) != pfVar6);
              }
            }
            fVar11 = *(float *)(param_9 + 0x48);
            uVar15 = (ulong)(uint)fVar11;
            fVar14 = *(float *)(param_9 + 0x4c);
            param_7 = (ulong)(uint)fVar14;
            if (fVar14 != fVar11) {
              fVar16 = *(float *)(param_9 + 0x50);
              uVar17 = 0;
              fVar18 = *(float *)(param_9 + 0x54);
              param_4 = (ulong)(uint)fVar18;
              param_5 = (ulong)(uint)(fVar18 - fVar16);
              param_7 = (ulong)(uint)(fVar14 - fVar11);
              fVar10 = ((fVar10 - fVar11) * (fVar18 - fVar16)) / (fVar14 - fVar11) + fVar16;
              fVar11 = fVar16;
              if (fVar18 <= fVar16) {
                fVar11 = fVar18;
              }
              if (fVar11 <= fVar10) {
                fVar11 = fVar10;
              }
              uVar15 = (ulong)(uint)fVar11;
              if (fVar16 <= fVar18) {
                fVar16 = fVar18;
              }
              fVar10 = fVar16;
              if (fVar11 <= fVar16) {
                fVar10 = fVar11;
              }
              fVar16 = fVar10;
            }
          }
        }
        uVar20 = 0;
        fVar11 = glist_xtopixels((ulong)(uint)(fVar10 + fVar19),uVar15,CONCAT44(uVar17,fVar16),
                                 param_4,param_5,param_1 & 0xffffffff,param_7,param_8,param_10,
                                 pcVar8,plVar5,pfVar6,param_13,param_14);
        fVar10 = 0.0;
        plVar5 = extraout_RDX_01;
        if (*(char *)(param_9 + 0x60) == '\x01') {
          if (*(char *)(param_9 + 0x61) == '\0') {
            fVar10 = *(float *)(param_9 + 0x68);
          }
          else {
            if (param_12 == 0) {
              bug(0,uVar15,CONCAT44(uVar17,fVar16),param_4,param_5,CONCAT44(uVar20,fVar19),
                  param_2 & 0xffffffff,param_8,"template_find_field",pcVar8,extraout_RDX_01,pfVar6,
                  param_13,param_14,in_stack_fffffffffffffb28);
              fVar10 = 0.0;
              plVar5 = extraout_RDX_02;
            }
            else {
              fVar10 = 0.0;
              if (0 < (int)*(uint *)(param_12 + 0x18)) {
                pcVar8 = *(char **)(param_9 + 0x68);
                plVar5 = (long *)(*(long *)(param_12 + 0x20) + 8);
                pfVar6 = (float *)0x0;
                do {
                  if ((char *)*plVar5 == pcVar8) {
                    if ((int)plVar5[-1] == 0) {
                      fVar10 = *(float *)(param_11 + (int)pfVar6);
                    }
                    break;
                  }
                  pfVar6 = pfVar6 + 2;
                  plVar5 = plVar5 + 3;
                } while ((float *)((ulong)*(uint *)(param_12 + 0x18) * 8) != pfVar6);
              }
            }
            fVar16 = *(float *)(param_9 + 0x70);
            uVar17 = 0;
            fVar14 = *(float *)(param_9 + 0x74);
            uVar15 = (ulong)(uint)fVar14;
            if (fVar14 != fVar16) {
              fVar18 = *(float *)(param_9 + 0x78);
              fVar1 = *(float *)(param_9 + 0x7c);
              param_5 = (ulong)(uint)fVar1;
              uVar20 = 0;
              fVar19 = fVar1 - fVar18;
              fVar10 = ((fVar10 - fVar16) * fVar19) / (fVar14 - fVar16) + fVar18;
              fVar14 = fVar18;
              if (fVar1 <= fVar18) {
                fVar14 = fVar1;
              }
              if (fVar14 <= fVar10) {
                fVar14 = fVar10;
              }
              uVar15 = (ulong)(uint)fVar14;
              if (fVar18 <= fVar1) {
                fVar18 = fVar1;
              }
              fVar10 = fVar18;
              if (fVar14 <= fVar18) {
                fVar10 = fVar14;
              }
              param_4 = (ulong)(uint)fVar10;
            }
          }
        }
        uVar21 = 0;
        fVar10 = glist_ytopixels((ulong)(uint)(fVar10 + fVar13),uVar15,CONCAT44(uVar17,fVar16),
                                 param_4,param_5,CONCAT44(uVar20,fVar19),param_2 & 0xffffffff,
                                 param_8,param_10,pcVar8,plVar5,pfVar6,param_13,param_14);
        uVar12 = fielddesc_getfloat(CONCAT44(extraout_XMM0_Db_00,fVar10),uVar15,
                                    CONCAT44(uVar17,fVar16),param_4,param_5,CONCAT44(uVar20,fVar19),
                                    CONCAT44(uVar21,fVar13),param_8,(char *)(param_9 + 0x88),
                                    param_12,param_11,1,param_13,param_14);
        pcVar9 = (char *)0xcccccccd;
        pcVar8 = local_438;
        drawnumber_getbuf(CONCAT44(extraout_XMM0_Db_01,uVar12),uVar15,CONCAT44(uVar17,fVar16),
                          param_4,param_5,CONCAT44(uVar20,fVar19),CONCAT44(uVar21,fVar13),param_8,
                          param_9,param_11,param_12,pcVar8,(char *)0xcccccccd,param_14);
        gensym(PTR_sys_font_00715cc0);
        uVar2 = glist_getfont(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_00),uVar15,
                              CONCAT44(uVar17,fVar16),param_4,param_5,CONCAT44(uVar20,fVar19),
                              CONCAT44(uVar21,fVar13),param_8,param_10,param_11,extraout_RDX_03,
                              pcVar8,pcVar9,param_14);
        iVar3 = glist_getzoom(param_10);
        sys_hostfontsize(uVar2,iVar3);
        gensym(PTR_sys_fontweight_00715e60);
        uVar4 = glist_getcanvas(param_10);
        pdgui_vmess(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_01),uVar15,CONCAT44(uVar17,fVar16)
                    ,param_4,param_5,CONCAT44(uVar20,fVar19),CONCAT44(uVar21,fVar13),param_8,0,
                    "crr ii rs rk rs rA rS",uVar4,"create","text",(ulong)(uint)(int)fVar11,
                    (char)(int)fVar10);
      }
    }
    else if (param_12 == 0) {
      bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"template_find_field",
          param_10,param_11,pfVar6,param_13,param_14,in_stack_fffffffffffffb28);
    }
    else if (0 < (int)*(uint *)(param_12 + 0x18)) {
      plVar5 = (long *)(*(long *)(param_12 + 0x20) + 8);
      lVar7 = 0;
      do {
        if (*plVar5 == *(long *)pfVar6) {
          if ((int)plVar5[-1] != 0) {
            return;
          }
          pfVar6 = (float *)((int)lVar7 + param_11);
          goto LAB_00525d10;
        }
        lVar7 = lVar7 + 8;
        plVar5 = plVar5 + 3;
      } while ((ulong)*(uint *)(param_12 + 0x18) * 8 != lVar7);
    }
  }
  return;
}


