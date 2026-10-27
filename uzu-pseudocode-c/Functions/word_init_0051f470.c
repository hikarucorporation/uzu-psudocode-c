// Function : word_init
// Namespace: 
// Entry    : 0051f470
// Prototype: undefined word_init(long param_1, long param_2, undefined8 param_3)
// Body     : 0051f470 - 0051f52c


void word_init(long param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  long *plVar2;
  undefined4 *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 in_XMM0_Qa;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  
  iVar1 = *(int *)(param_2 + 0x18);
  if (0 < iVar1) {
    plVar5 = (long *)(*(long *)(param_2 + 0x20) + 0x10);
    lVar4 = 0;
    do {
      switch((int)plVar5[-2]) {
      case 0:
        *(undefined4 *)(param_1 + lVar4 * 8) = 0;
        goto switchD_0051f4d8_default;
      case 1:
        plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
        puVar3 = (undefined4 *)(*plVar2 + 0x90);
        in_XMM0_Qa = extraout_XMM0_Qa_00;
        break;
      case 2:
        puVar3 = binbuf_new();
        in_XMM0_Qa = extraout_XMM0_Qa;
        break;
      case 3:
        puVar3 = array_new(in_XMM0_Qa,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,
                           in_XMM6_Qa,in_XMM7_Qa,*plVar5,param_3);
        in_XMM0_Qa = extraout_XMM0_Qa_01;
        break;
      default:
        goto switchD_0051f4d8_default;
      }
      *(undefined4 **)(param_1 + lVar4 * 8) = puVar3;
switchD_0051f4d8_default:
      lVar4 = lVar4 + 1;
      plVar5 = plVar5 + 3;
    } while (iVar1 != (int)lVar4);
  }
  return;
}


