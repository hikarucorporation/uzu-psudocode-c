// Function : textbuf_read
// Namespace: 
// Entry    : 005573b0
// Prototype: undefined textbuf_read(undefined8 param_1, undefined8 param_2, long param_3, long param_4, long param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, int * param_12, char * param_13, undefined8 param_14, undefined1 param_15)
// Body     : 005573b0 - 00557536


void textbuf_read(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
                 undefined8 param_10,undefined8 param_11,int *param_12,char *param_13,
                 undefined8 param_14,undefined1 param_15)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 in_RAX;
  undefined7 extraout_var;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  uint uVar3;
  int *piVar4;
  char *__s1;
  undefined8 uVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined1 uVar8;
  
  if ((int)param_11 != 0) {
    uVar3 = (int)param_11 - 1;
    uVar5 = 0;
    piVar4 = param_12;
    do {
      while( true ) {
        uVar8 = (undefined1)in_RAX;
        if (*piVar4 != 2) goto LAB_0055743f;
        puVar1 = *(undefined8 **)(piVar4 + 2);
        __s1 = (char *)*puVar1;
        if (*__s1 != '-') {
          if (uVar3 != 0) {
            uVar7 = post(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                         "warning: text define ignoring extra argument: ");
            uVar7 = postatom(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar3,
                             piVar4 + 4,extraout_RDX_02,param_12,param_13,param_14);
            param_1 = endpost(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
            __s1 = (char *)*puVar1;
          }
          bVar6 = binbuf_read_via_canvas
                            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                             *(uint **)(param_9 + 0x30),__s1,*(long *)(param_9 + 0x38),(int)uVar5);
          uVar7 = extraout_XMM0_Qa_00;
          if ((int)CONCAT71(extraout_var,bVar6) != 0) {
            uVar7 = pd_error(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,
                             param_8,param_9,"%s: read failed",*puVar1,uVar5,param_13,param_14);
          }
          if (*(long *)(param_9 + 0x40) == 0) {
            return;
          }
          pdgui_vmess(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x65a110,"^",
                      param_9,uVar5,param_13,param_14,uVar8);
          uVar3 = binbuf_getnatom(*(undefined4 **)(param_9 + 0x30));
          uVar5 = binbuf_getvec(*(long *)(param_9 + 0x30));
          uVar7 = pdgui_vmess(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8,0x65a126,"^A",param_9,(ulong)uVar3,uVar5,param_14,uVar8);
          pdgui_vmess(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x65a145,"^i",
                      param_9,0,uVar5,param_14,param_15);
          return;
        }
        iVar2 = strcmp(__s1,"-c");
        if (iVar2 != 0) break;
        uVar5 = 1;
        piVar4 = piVar4 + 4;
        bVar6 = uVar3 == 0;
        uVar3 = uVar3 - 1;
        param_11 = extraout_RDX_01;
        param_1 = extraout_XMM0_Qa;
        if (bVar6) goto LAB_0055743f;
      }
      uVar7 = pd_error(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       param_9,"text read: unknown flag ...",extraout_RDX_01,param_12,param_13,
                       param_14);
      uVar7 = postatom(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar3 + 1,
                       piVar4,extraout_RDX,param_12,param_13,param_14);
      param_1 = endpost(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      piVar4 = piVar4 + 4;
      bVar6 = uVar3 != 0;
      uVar3 = uVar3 - 1;
      param_11 = extraout_RDX_00;
    } while (bVar6);
  }
LAB_0055743f:
  pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
           "text read: no file name given",param_11,param_12,param_13,param_14);
  return;
}


