// Function : canvas_find_again
// Namespace: 
// Entry    : 005122e0
// Prototype: undefined canvas_find_again(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined * param_14)
// Body     : 005122e0 - 005123a1


void canvas_find_again(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12
                      ,char *param_13,undefined *param_14)

{
  uint in_EAX;
  uint uVar1;
  long *plVar2;
  undefined8 extraout_RDX;
  uint uVar3;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  ulong uStack_18;
  int iStack_14;
  
  uStack_18 = (ulong)in_EAX;
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  if ((*(long *)(**(long **)(*plVar2 + 0x48) + 0x60) != 0) &&
     (*(long **)PTR_canvas_whichfind_00715568 != (long *)0x0)) {
    uVar1 = canvas_dofind(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          *(long **)PTR_canvas_whichfind_00715568,&iStack_14,extraout_RDX,param_12,
                          param_13,param_14);
    plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
    uVar3 = *(int *)(**(long **)(*plVar2 + 0x48) + 0x58) + 1;
    *(uint *)(**(long **)(*plVar2 + 0x48) + 0x58) = uVar3;
    pdgui_vmess(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x654c88
                ,"^ iii",param_9,(ulong)uVar1,(ulong)uVar3,uStack_18 >> 0x20,(undefined1)uStack_18);
    if (uVar1 == 0) {
      plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
      *(undefined4 *)(**(long **)(*plVar2 + 0x48) + 0x58) = 0;
      return;
    }
  }
  return;
}


