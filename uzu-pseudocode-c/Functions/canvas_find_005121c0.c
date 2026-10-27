// Function : canvas_find
// Namespace: 
// Entry    : 005121c0
// Prototype: undefined canvas_find(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined * param_14)
// Body     : 005121c0 - 005122d1


void canvas_find(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long *param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
                char *param_13,undefined *param_14)

{
  byte *__s;
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  uint *puVar5;
  size_t sVar6;
  undefined8 extraout_RDX;
  ulong uVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  int aiStack_228 [128];
  
  puVar3 = (undefined8 *)
           sys_decodedialog(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10
                            ,param_10,param_11,param_12,param_13,param_14);
  plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
  puVar5 = *(uint **)(**(long **)(*plVar4 + 0x48) + 0x60);
  if (puVar5 == (uint *)0x0) {
    puVar5 = binbuf_new();
    plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
    *(uint **)(**(long **)(*plVar4 + 0x48) + 0x60) = puVar5;
  }
  __s = (byte *)*puVar3;
  sVar6 = strlen((char *)__s);
  binbuf_text(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
              param_7,param_8,puVar5,__s,sVar6);
  plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar1 = **(long **)(*plVar4 + 0x48);
  *(undefined4 *)(lVar1 + 0x58) = 0;
  *(int *)(lVar1 + 0x5c) = (int)(float)param_1;
  *(long **)PTR_canvas_whichfind_00715568 = param_9;
  uVar2 = canvas_dofind(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,
                        param_5,param_6,param_7,param_8,param_9,aiStack_228 + 0x80,extraout_RDX,
                        (ulong)(uint)(int)(float)param_1,param_13,param_14);
  if (uVar2 == 0) {
    uVar7 = (ulong)*(uint *)(**(long **)(*plVar4 + 0x48) + 0x58);
  }
  else {
    *(undefined4 *)(**(long **)(*plVar4 + 0x48) + 0x58) = 1;
    uVar7 = 1;
  }
  pdgui_vmess(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,param_5,
              param_6,param_7,param_8,0x654c88,"^ iii",param_9,(ulong)uVar2,uVar7,0,0);
  return;
}


