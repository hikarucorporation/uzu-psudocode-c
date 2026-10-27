// Function : sendatoms
// Namespace: 
// Entry    : 00541260
// Prototype: undefined sendatoms(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, int param_9, int * param_10, int param_11)
// Body     : 00541260 - 0054145e


void sendatoms(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              int param_9,int *param_10,int param_11)

{
  size_t sVar1;
  long lVar2;
  void *pvVar3;
  char *pcVar4;
  ulong uVar5;
  float fVar6;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  
  if (0 < param_9) {
    if (param_11 == 0) {
      do {
        switch(*param_10) {
        case 1:
          fVar6 = (float)atom_getfloat(param_10);
          param_1 = sys_vgui((double)fVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                             "%g ");
          break;
        case 2:
        case 9:
          pcVar4 = (char *)**(undefined8 **)(param_10 + 2);
          if (pcVar4 != (char *)0x0) {
            sVar1 = strlen(pcVar4);
            lVar2 = __tls_get_addr(&PTR_007153d8);
            pvVar3 = *(void **)(lVar2 + 0x100);
            param_1 = extraout_XMM0_Qa;
            if (*(ulong *)(lVar2 + 0x108) < sVar1 * 2 + 1) {
              freebytes(pvVar3);
              uVar5 = sVar1 * 2 + 0x2000 & 0xffffffffffffe000;
              *(ulong *)(lVar2 + 0x108) = uVar5;
              pvVar3 = getbytes(uVar5);
              *(void **)(lVar2 + 0x100) = pvVar3;
              param_1 = extraout_XMM0_Qa_00;
            }
            if (pvVar3 != (void *)0x0) {
              pdgui_strnescape((long)pvVar3,*(ulong *)(lVar2 + 0x108),(long)pcVar4,0);
              param_1 = extraout_XMM0_Qa_01;
            }
          }
          pcVar4 = "{%s} ";
          goto LAB_0054141b;
        case 3:
          pcVar4 = "%p ";
LAB_0054141b:
          param_1 = sys_vgui(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pcVar4)
          ;
          break;
        case 4:
          pcVar4 = "\\; ";
          goto LAB_0054142e;
        case 5:
          pcVar4 = "{,} ";
LAB_0054142e:
          param_1 = sys_vgui(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pcVar4)
          ;
          break;
        case 8:
          param_1 = sys_vgui(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                             "{$%d} ");
        }
        param_10 = param_10 + 4;
        param_9 = param_9 + -1;
      } while (param_9 != 0);
    }
    else {
      do {
        switch(*param_10) {
        case 1:
          fVar6 = (float)atom_getfloat(param_10);
          param_1 = sys_vgui((double)fVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                             "%g ");
          break;
        case 2:
        case 9:
          pcVar4 = "%s ";
          goto LAB_005412fc;
        case 3:
          pcVar4 = "%p ";
LAB_005412fc:
          param_1 = sys_vgui(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pcVar4)
          ;
          break;
        case 4:
          pcVar4 = "\\; ";
          goto LAB_005412a1;
        case 5:
          pcVar4 = ", ";
LAB_005412a1:
          param_1 = sys_vgui(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pcVar4)
          ;
          break;
        case 8:
          param_1 = sys_vgui(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"$%d ")
          ;
        }
        param_10 = param_10 + 4;
        param_9 = param_9 + -1;
      } while (param_9 != 0);
    }
  }
  return;
}


