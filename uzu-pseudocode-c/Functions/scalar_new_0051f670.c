// Function : scalar_new
// Namespace: 
// Entry    : 0051f670
// Prototype: undefined8 * scalar_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0051f670 - 0051f7ab


undefined8 *
scalar_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
          undefined8 *param_10,undefined8 param_11,undefined8 param_12,char *param_13,
          undefined8 param_14)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined4 *puVar6;
  undefined8 extraout_RDX;
  long *plVar7;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 *local_48;
  undefined4 local_40;
  long local_38;
  
  puVar4 = param_10;
  lVar2 = template_findbyname(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              (long)param_10);
  if (lVar2 == 0) {
    puVar4 = (undefined8 *)0x0;
    pd_error(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
             "scalar: couldn\'t find template %s",*param_10,param_12,param_13,param_14);
  }
  else {
    uVar3 = template_cancreate(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,
                               param_8,lVar2,puVar4,extraout_RDX,param_12,param_13,param_14);
    if ((int)uVar3 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      puVar4 = getbytes((long)*(int *)(lVar2 + 0x18) * 8 + 0x18);
      *puVar4 = *(undefined8 *)PTR_scalar_class_00715810;
      puVar4[2] = param_10;
      local_38 = *(long *)(param_9 + 0x38);
      local_40 = *(undefined4 *)(param_9 + 0x40);
      *(int *)(local_38 + 0xc) = *(int *)(local_38 + 0xc) + 1;
      iVar1 = *(int *)(lVar2 + 0x18);
      if (0 < iVar1) {
        plVar7 = (long *)(*(long *)(lVar2 + 0x20) + 0x10);
        lVar2 = 0;
        uVar3 = extraout_XMM0_Qa_00;
        local_48 = puVar4;
        do {
          switch((int)plVar7[-2]) {
          case 0:
            *(undefined4 *)(puVar4 + lVar2 + 3) = 0;
            goto switchD_0051f73a_default;
          case 1:
            plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
            puVar6 = (undefined4 *)(*plVar5 + 0x90);
            uVar3 = extraout_XMM0_Qa_02;
            break;
          case 2:
            puVar6 = binbuf_new();
            uVar3 = extraout_XMM0_Qa_01;
            break;
          case 3:
            puVar6 = array_new(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,*plVar7
                               ,&local_48);
            uVar3 = extraout_XMM0_Qa_03;
            break;
          default:
            goto switchD_0051f73a_default;
          }
          puVar4[lVar2 + 3] = puVar6;
switchD_0051f73a_default:
          lVar2 = lVar2 + 1;
          plVar7 = plVar7 + 3;
        } while (iVar1 != (int)lVar2);
      }
    }
  }
  return puVar4;
}


