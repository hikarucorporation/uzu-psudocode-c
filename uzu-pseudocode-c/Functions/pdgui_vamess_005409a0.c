// Function : pdgui_vamess
// Namespace: 
// Entry    : 005409a0
// Prototype: undefined pdgui_vamess(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, char * param_10, uint * param_11)
// Body     : 005409a0 - 00540c7d


void pdgui_vamess(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,char *param_10,uint *param_11)

{
  long lVar1;
  uchar param3;
  uint uVar2;
  ulong uVar3;
  uint param2;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined4 extraout_XMM0_Da;
  undefined8 uVar7;
  undefined4 extraout_XMM0_Db;
  long lVar8;
  uint local_68;
  uint uStack_64;
  long *plStack_60;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  local_40 = 0;
  local_48 = 0x100000072;
  local_38 = param_9;
  if (param_9 != 0) {
    uVar7 = addmess(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(int *)&local_48
                   );
    sys_vgui(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"%s");
  }
  lVar1 = *(long *)(param_11 + 4);
  local_68 = *param_11;
  uStack_64 = param_11[1];
  lVar8 = *(long *)param_11;
  plStack_60 = *(long **)(param_11 + 2);
  param3 = *param_10;
  if (param3 != '\0') {
    do {
      param_10 = param_10 + 1;
      param2 = (uint)(char)param3;
      local_48 = (ulong)param2;
      uVar3 = local_48;
      local_48 = CONCAT44(1,param2);
      uVar2 = local_68;
      switch(param2) {
      case 9:
      case 10:
      case 0x20:
        local_48 = 0x100000020;
        break;
      default:
        local_48 = uVar3;
        fprintf(*(FILE **)PTR_stderr_00715948,"pdgui_vmess: unknown type-ID %d (\'%c\')\n",param2,
                param3);
        lVar8 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
        goto LAB_00540a60;
      case 0x41:
      case 0x43:
      case 0x46:
      case 0x52:
      case 0x53:
      case 0x57:
      case 0x61:
      case 0x70:
      case 0x77:
        uVar4 = (ulong)local_68;
        if (uVar4 < 0x29) {
          uVar3 = uVar4 + 8;
          local_48 = CONCAT44(*(undefined4 *)(lVar1 + uVar4),param2);
          uVar2 = (uint)uVar3;
          if (local_68 < 0x21) {
            local_68 = local_68 + 0x10;
            goto LAB_00540ad4;
          }
        }
        else {
          local_48 = CONCAT44((int)*plStack_60,param2);
          plStack_60 = plStack_60 + 1;
        }
LAB_00540af4:
        local_68 = uVar2;
        plVar5 = plStack_60;
        plStack_60 = plStack_60 + 1;
        goto LAB_00540b02;
      case 0x5e:
      case 99:
      case 0x6f:
      case 0x72:
      case 0x73:
      case 0x78:
        uVar3 = (ulong)local_68;
        if (0x28 < uVar3) goto LAB_00540af4;
        local_68 = local_68 + 8;
LAB_00540ad4:
        plVar5 = (long *)(uVar3 + lVar1);
LAB_00540b02:
        local_38 = *plVar5;
LAB_00540b05:
        break;
      case 0x66:
        uVar3 = (ulong)uStack_64;
        if (uVar3 < 0xa1) {
          uStack_64 = uStack_64 + 0x10;
          plVar5 = (long *)(uVar3 + lVar1);
        }
        else {
          plVar5 = plStack_60;
          plStack_60 = plStack_60 + 1;
        }
        local_38 = *plVar5;
        lVar8 = local_38;
        break;
      case 0x69:
      case 0x6b:
        uVar3 = (ulong)local_68;
        if (uVar3 < 0x29) {
          local_68 = local_68 + 8;
          plVar5 = (long *)(uVar3 + lVar1);
        }
        else {
          plVar5 = plStack_60;
          plStack_60 = plStack_60 + 1;
        }
        local_38 = CONCAT44(local_38._4_4_,(int)*plVar5);
        break;
      case 0x6d:
        uVar3 = (ulong)local_68;
        if (uVar3 < 0x29) {
          plVar5 = (long *)(uVar3 + lVar1);
          local_68 = local_68 + 8;
          uVar3 = (ulong)local_68;
          puVar6 = (undefined8 *)*plVar5;
          if (puVar6 == (undefined8 *)0x0) goto LAB_00540c35;
LAB_00540ba5:
          local_40 = *puVar6;
          if (0x28 < (uint)uVar3) goto LAB_00540c45;
LAB_00540bb6:
          uVar2 = (uint)uVar3;
          local_68 = uVar2 + 8;
          local_48 = CONCAT44(*(undefined4 *)(lVar1 + uVar3),param2);
          if (0x20 < uVar2) goto LAB_00540c59;
          uVar3 = (ulong)local_68;
          local_68 = uVar2 + 0x10;
          plVar5 = (long *)(uVar3 + lVar1);
        }
        else {
          plVar5 = plStack_60 + 1;
          puVar6 = (undefined8 *)*plStack_60;
          plStack_60 = plVar5;
          if (puVar6 != (undefined8 *)0x0) goto LAB_00540ba5;
LAB_00540c35:
          local_40 = 0;
          if ((uint)uVar3 < 0x29) goto LAB_00540bb6;
LAB_00540c45:
          local_48 = CONCAT44((int)*plStack_60,param2);
          plStack_60 = plStack_60 + 1;
LAB_00540c59:
          plVar5 = plStack_60;
          plStack_60 = plStack_60 + 1;
        }
        local_38 = *plVar5;
        goto LAB_00540b05;
      }
      lVar8 = addmess(lVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(int *)&local_48
                     );
      if ((int)local_48 != 0x20) {
        lVar8 = sys_vgui(lVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"%s");
      }
LAB_00540a60:
      param3 = *param_10;
    } while (param3 != '\0');
  }
  return;
}


