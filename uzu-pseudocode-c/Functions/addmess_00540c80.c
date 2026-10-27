// Function : addmess
// Namespace: 
// Entry    : 00540c80
// Prototype: undefined addmess(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, int * param_9)
// Body     : 00540c80 - 0054112d


void addmess(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,int *param_9
            )

{
  uint uVar1;
  long lVar2;
  size_t sVar3;
  long lVar4;
  void *pvVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  char *pcVar9;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 uVar10;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  
  switch(*param_9) {
  case 0x41:
    param_1 = sys_vgui(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"{");
  case 0x61:
    param_1 = sendatoms(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9[1],
                        *(int **)(param_9 + 4),0);
    if (*param_9 != 0x41) {
switchD_00540caa_caseD_42:
      return;
    }
    break;
  default:
    goto switchD_00540caa_caseD_42;
  case 0x43:
    param_1 = sys_vgui(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"{");
    if (0 < param_9[1]) {
      lVar4 = 0;
      do {
        param_1 = sys_vgui(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                           ".x%lx.c ");
        lVar4 = lVar4 + 1;
      } while (lVar4 < param_9[1]);
    }
    break;
  case 0x46:
    lVar4 = *(long *)(param_9 + 4);
    param_1 = sys_vgui(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"{");
    if (0 < param_9[1]) {
      lVar7 = 0;
      do {
        param_1 = sys_vgui((double)*(float *)(lVar4 + lVar7 * 4),param_2,param_3,param_4,param_5,
                           param_6,param_7,param_8,"%f ");
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < param_9[1]);
    }
    break;
  case 0x52:
  case 0x53:
    lVar4 = *(long *)(param_9 + 4);
    param_1 = sys_vgui(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"{");
    if (0 < param_9[1]) {
      lVar7 = 0;
      do {
        pcVar9 = *(char **)(lVar4 + lVar7 * 8);
        if (*param_9 == 0x52) {
          pcVar9 = "%s ";
        }
        else {
          if (pcVar9 != (char *)0x0) {
            sVar3 = strlen(pcVar9);
            lVar2 = __tls_get_addr(&PTR_007153d8);
            pvVar5 = *(void **)(lVar2 + 0x100);
            param_1 = extraout_XMM0_Qa;
            if (*(ulong *)(lVar2 + 0x108) < sVar3 * 2 + 1) {
              freebytes(pvVar5);
              uVar8 = sVar3 * 2 + 0x2000 & 0xffffffffffffe000;
              *(ulong *)(lVar2 + 0x108) = uVar8;
              pvVar5 = getbytes(uVar8);
              *(void **)(lVar2 + 0x100) = pvVar5;
              param_1 = extraout_XMM0_Qa_00;
            }
            if (pvVar5 != (void *)0x0) {
              pdgui_strnescape((long)pvVar5,*(ulong *)(lVar2 + 0x108),(long)pcVar9,0);
              param_1 = extraout_XMM0_Qa_01;
            }
          }
          pcVar9 = "{%s} ";
        }
        param_1 = sys_vgui(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pcVar9);
        lVar7 = lVar7 + 1;
      } while (lVar7 < param_9[1]);
    }
    break;
  case 0x57:
  case 0x77:
    lVar4 = *(long *)(param_9 + 4);
    if (*param_9 == 0x57) {
      param_1 = sys_vgui(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"{");
    }
    if (0 < param_9[1]) {
      lVar7 = 0;
      do {
        param_1 = sys_vgui((double)*(float *)(lVar4 + lVar7 * 8),param_2,param_3,param_4,param_5,
                           param_6,param_7,param_8,"%g ");
        lVar7 = lVar7 + 1;
      } while (lVar7 < param_9[1]);
    }
    if (*param_9 != 0x57) {
      return;
    }
    break;
  case 0x5e:
    pcVar9 = ".x%lx";
    goto LAB_00541119;
  case 99:
    pcVar9 = ".x%lx.c";
    goto LAB_00541119;
  case 0x66:
    sys_vgui(*(undefined8 *)(param_9 + 4),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
             "%g");
    return;
  case 0x69:
    pcVar9 = "%d";
    goto LAB_00540f48;
  case 0x6b:
    pcVar9 = "#%06x";
LAB_00540f48:
    sys_vgui(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pcVar9);
    return;
  case 0x6d:
    uVar10 = sys_vgui(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"{");
    if (*(long *)(param_9 + 2) != 0) {
      uVar10 = sys_vgui(uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"%s ");
    }
    param_1 = sendatoms(uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9[1],
                        *(int **)(param_9 + 4),1);
    break;
  case 0x6f:
    pcVar9 = "obj:%p";
    goto LAB_00541119;
  case 0x70:
    pcVar9 = *(char **)(param_9 + 4);
    if (pcVar9 != (char *)0x0) {
      uVar1 = param_9[1];
      sVar3 = (size_t)uVar1;
      if ((int)uVar1 < 1) {
        sVar3 = strlen(pcVar9);
      }
      lVar4 = __tls_get_addr(&PTR_007153d8);
      pvVar5 = *(void **)(lVar4 + 0x100);
      param_1 = extraout_XMM0_Qa_02;
      if (*(ulong *)(lVar4 + 0x108) < sVar3 * 2 + 1) {
        freebytes(pvVar5);
        uVar8 = sVar3 * 2 + 0x2000 & 0xffffffffffffe000;
        *(ulong *)(lVar4 + 0x108) = uVar8;
        pvVar5 = getbytes(uVar8);
        *(void **)(lVar4 + 0x100) = pvVar5;
        param_1 = extraout_XMM0_Qa_03;
      }
      if (pvVar5 != (void *)0x0) {
        uVar8 = *(ulong *)(lVar4 + 0x108);
        uVar6 = (ulong)(int)uVar1;
LAB_005410f8:
        pdgui_strnescape((long)pvVar5,uVar8,(long)pcVar9,uVar6);
        param_1 = extraout_XMM0_Qa_06;
      }
    }
    goto LAB_00541104;
  case 0x72:
    pcVar9 = "%s";
    goto LAB_00541119;
  case 0x73:
    pcVar9 = *(char **)(param_9 + 4);
    if (pcVar9 != (char *)0x0) {
      sVar3 = strlen(pcVar9);
      lVar4 = __tls_get_addr(&PTR_007153d8);
      pvVar5 = *(void **)(lVar4 + 0x100);
      param_1 = extraout_XMM0_Qa_04;
      if (*(ulong *)(lVar4 + 0x108) < sVar3 * 2 + 1) {
        freebytes(pvVar5);
        uVar8 = sVar3 * 2 + 0x2000 & 0xffffffffffffe000;
        *(ulong *)(lVar4 + 0x108) = uVar8;
        pvVar5 = getbytes(uVar8);
        *(void **)(lVar4 + 0x100) = pvVar5;
        param_1 = extraout_XMM0_Qa_05;
      }
      if (pvVar5 != (void *)0x0) {
        uVar8 = *(ulong *)(lVar4 + 0x108);
        uVar6 = 0;
        goto LAB_005410f8;
      }
    }
LAB_00541104:
    pcVar9 = "{%s}";
    goto LAB_00541119;
  case 0x78:
    pcVar9 = "%p";
LAB_00541119:
    sys_vgui(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pcVar9);
    return;
  }
  sys_vgui(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"}");
  return;
}


