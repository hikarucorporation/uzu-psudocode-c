// Function : soundfiler_parsewriteargs
// Namespace: 
// Entry    : 0059af80
// Prototype: undefined8 soundfiler_parsewriteargs(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, uint * param_9, undefined8 * param_10, undefined8 * param_11)
// Body     : 0059af80 - 0059b513


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
soundfiler_parsewriteargs
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,uint *param_9,
          undefined8 *param_10,undefined8 *param_11)

{
  float fVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  size_t sVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  int iVar10;
  int *piVar11;
  char *pcVar12;
  long lVar13;
  bool bVar14;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  int local_78;
  int local_74;
  undefined8 *local_68;
  int local_60;
  undefined4 local_5c;
  ulong local_50;
  ulong local_48;
  
  uVar8 = *param_9;
  piVar11 = (int *)*param_10;
  if ((int)uVar8 < 1) {
    local_48 = 0;
    local_50 = 0xffffffffffffffff;
    iVar10 = 2;
    local_60 = -1;
    local_78 = -1;
    local_5c = 0;
    local_74 = 0;
    local_68 = (undefined8 *)0x0;
  }
  else {
    lVar13 = sf_numtypes << 3;
    iVar10 = 2;
    local_50 = 0xffffffffffffffff;
    local_68 = (undefined8 *)0x0;
    local_74 = 0;
    local_5c = 0;
    local_48 = 0;
    local_78 = -1;
    local_60 = -1;
    do {
      if (*piVar11 != 2) goto LAB_0059b378;
      if (*(char *)**(undefined8 **)(piVar11 + 2) != '-') goto LAB_0059b38a;
      pcVar12 = (char *)**(undefined8 **)(piVar11 + 2) + 1;
      iVar3 = strcmp(pcVar12,"skip");
      if (iVar3 == 0) {
        if ((uVar8 < 2) || (piVar11[4] != 1)) goto LAB_0059b378;
        fVar1 = (float)piVar11[6];
        param_2 = 0;
        if (fVar1 < 0.0) goto LAB_0059b378;
        local_48 = (long)(fVar1 - _DAT_0065daf0) & (long)fVar1 >> 0x3f | (long)fVar1;
LAB_0059b1ea:
        lVar6 = 2;
        iVar3 = -2;
LAB_0059b1f4:
        iVar7 = iVar3;
      }
      else {
        iVar3 = strcmp(pcVar12,"nframes");
        if (iVar3 == 0) {
          if ((1 < uVar8) && (piVar11[4] == 1)) {
            fVar1 = (float)piVar11[6];
            param_2 = 0;
            if (0.0 <= fVar1) {
              local_50 = (long)(fVar1 - _DAT_0065daf0) & (long)fVar1 >> 0x3f | (long)fVar1;
              goto LAB_0059b1ea;
            }
          }
          goto LAB_0059b378;
        }
        iVar3 = strcmp(pcVar12,"bytes");
        if (iVar3 != 0) {
          iVar3 = strcmp(pcVar12,"normalize");
          lVar6 = 1;
          if (iVar3 != 0) {
            iVar3 = strcmp(pcVar12,"big");
            if (iVar3 == 0) {
              local_78 = 1;
            }
            else {
              iVar3 = strcmp(pcVar12,"little");
              if (iVar3 == 0) {
                local_78 = 0;
              }
              else {
                iVar3 = strcmp(pcVar12,"rate");
                if ((iVar3 == 0) || (iVar3 = strcmp(pcVar12,"r"), iVar3 == 0)) {
                  if (uVar8 < 2) {
                    return 0xffffffff;
                  }
                  if (piVar11[4] != 1) {
                    return 0xffffffff;
                  }
                  local_60 = (int)(float)piVar11[6];
                  if (local_60 < 1) {
                    return 0xffffffff;
                  }
                  goto LAB_0059b1ea;
                }
                iVar3 = strcmp(pcVar12,"ascii");
                if (iVar3 == 0) {
                  local_74 = 1;
                }
                else {
                  iVar3 = strcmp(pcVar12,"nextstep");
                  if (iVar3 == 0) {
                    lVar6 = 0;
                    do {
                      local_68 = *(undefined8 **)((long)&sf_types + lVar6);
                      iVar3 = strcmp("next",(char *)*local_68);
                      if (iVar3 == 0) goto LAB_0059b294;
                      lVar6 = lVar6 + 8;
                    } while (lVar13 != lVar6);
                    local_68 = (undefined8 *)0x0;
                  }
                  else {
                    lVar6 = 0;
                    while( true ) {
                      local_68 = *(undefined8 **)((long)&sf_types + lVar6);
                      iVar3 = strcmp(pcVar12,(char *)*local_68);
                      if (iVar3 == 0) break;
                      lVar6 = lVar6 + 8;
                      if (lVar13 == lVar6) {
                        return 0xffffffff;
                      }
                    }
                    local_74 = 0;
                  }
                }
              }
            }
LAB_0059b294:
            lVar6 = 1;
            iVar7 = -1;
            goto LAB_0059b1f7;
          }
          local_5c = 1;
          iVar3 = -1;
          goto LAB_0059b1f4;
        }
        if (((uVar8 < 2) || (piVar11[4] != 1)) || (iVar10 = (int)(float)piVar11[6], iVar10 < 2))
        goto LAB_0059b378;
        lVar6 = 2;
        iVar7 = -2;
        iVar3 = -2;
        if (iVar10 - 2U < 3) goto LAB_0059b1f4;
        if (iVar10 != 8) goto LAB_0059b378;
      }
LAB_0059b1f7:
      piVar11 = piVar11 + lVar6 * 4;
      bVar14 = SCARRY4(uVar8,iVar7);
      uVar8 = uVar8 + iVar7;
    } while (uVar8 != 0 && bVar14 == (int)uVar8 < 0);
  }
  if (uVar8 == 0) {
LAB_0059b378:
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = 0xffffffff;
    if (*piVar11 == 2) {
LAB_0059b38a:
      puVar2 = *(undefined8 **)(piVar11 + 2);
      if (local_68 == (undefined8 *)0x0) {
        plVar9 = &sf_types;
        do {
          iVar3 = (**(code **)(*plVar9 + 0x30))(*puVar2,1000);
          if (iVar3 != 0) goto LAB_0059b40d;
          bVar14 = plVar9 != (long *)(&DAT_0071ef88 + sf_numtypes * 8);
          plVar9 = plVar9 + 1;
        } while (bVar14);
        plVar9 = &sf_types;
        if (local_74 == 0) {
          pcVar12 = (char *)*puVar2;
          sVar5 = strnlen(pcVar12,1000);
          if (((int)sVar5 < 5) || (iVar3 = strncmp(pcVar12 + ((int)sVar5 - 4),".txt",4), iVar3 != 0)
             ) {
            local_74 = 0;
          }
          else {
            local_74 = 1;
          }
        }
        else {
          local_74 = 1;
        }
LAB_0059b40d:
        local_68 = (undefined8 *)*plVar9;
      }
      iVar3 = (*(code *)local_68[8])(local_78);
      if ((local_78 != -1) && (local_78 != iVar3)) {
        post(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
             param_7,param_8,"%s: forced to %s endian");
      }
      *param_9 = uVar8 - 1;
      *param_10 = piVar11 + 4;
      *param_11 = puVar2;
      param_11[1] = local_68;
      *(int *)(param_11 + 2) = local_60;
      *(int *)((long)param_11 + 0x14) = iVar10;
      *(int *)(param_11 + 3) = iVar3;
      param_11[4] = local_50;
      param_11[5] = local_48;
      *(undefined4 *)(param_11 + 6) = local_5c;
      *(int *)((long)param_11 + 0x34) = local_74;
      uVar4 = 0;
    }
  }
  return uVar4;
}


