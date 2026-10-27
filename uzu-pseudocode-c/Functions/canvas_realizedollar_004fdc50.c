// Function : canvas_realizedollar
// Namespace: 
// Entry    : 004fdc50
// Prototype: undefined8 * canvas_realizedollar(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 004fdc50 - 004fdd10


undefined8 *
canvas_realizedollar
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
          undefined8 *param_10,undefined8 param_11,undefined8 param_12,char *param_13,
          undefined8 param_14)

{
  char *pcVar1;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 unaff_RBX;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar6;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar7;
  undefined1 uVar8;
  
  uVar3 = 0x24;
  pcVar1 = strchr((char *)*param_10,0x24);
  uVar8 = (undefined1)unaff_RBX;
  if (pcVar1 != (char *)0x0) {
    if (param_9 == 0) {
      uVar7 = bug(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  "canvas_getenv",uVar3,extraout_RDX,param_12,param_13,param_14,uVar8);
      uVar8 = (undefined1)unaff_RBX;
      uVar6 = extraout_RDX_00;
      lVar2 = lRam00000000000000e0;
    }
    else {
      lVar2 = *(long *)(param_9 + 0xe0);
      uVar6 = extraout_RDX;
      uVar7 = extraout_XMM0_Qa;
    }
    if (lVar2 == 0) {
      lVar5 = param_9;
      do {
        lVar5 = *(long *)(lVar5 + 0x48);
        if (lVar5 == 0) {
          uVar7 = bug(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      "t_canvasenvironment",uVar3,uVar6,param_12,param_13,param_14,(char)unaff_RBX);
          uVar6 = extraout_RDX_02;
        }
        uVar8 = (undefined1)unaff_RBX;
        lVar2 = *(long *)(lVar5 + 0xe0);
      } while (lVar2 == 0);
    }
    uVar6 = pd_pushsym(param_9);
    uVar4 = (ulong)*(uint *)(lVar2 + 8);
    uVar3 = 1;
    param_10 = binbuf_realizedollsym
                         (uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,
                          *(uint *)(lVar2 + 8),*(long *)(lVar2 + 0x10),1,param_13,param_14);
    pd_popsym(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
              uVar4,extraout_RDX_01,uVar3,param_13,param_14,uVar8);
  }
  return param_10;
}


