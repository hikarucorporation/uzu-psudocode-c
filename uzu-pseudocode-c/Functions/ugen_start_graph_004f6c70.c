// Function : ugen_start_graph
// Namespace: 
// Entry    : 004f6c70
// Prototype: undefined8 * ugen_start_graph(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, int param_9, undefined8 param_10, undefined4 param_11, undefined4 param_12)
// Body     : 004f6c70 - 004f6d20


undefined8 *
ugen_start_graph(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                int param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 extraout_XMM0_Qa;
  
  puVar2 = getbytes(0x70);
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  if (*(int *)(*(long *)(*plVar3 + 0x40) + 0x134) != 0) {
    post(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
         "ugen_start_graph...");
  }
  if (param_9 != 0) {
    param_12 = 0;
    param_11 = 0;
  }
  *puVar2 = 0;
  puVar2[3] = param_10;
  *(undefined4 *)(puVar2 + 2) = param_11;
  *(undefined4 *)((long)puVar2 + 0x14) = param_12;
  *(byte *)(puVar2 + 0xd) = *(byte *)(puVar2 + 0xd) & 0xf6 | (byte)param_9 & 1;
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar1 = *(long *)(*plVar3 + 0x40);
  puVar2[1] = *(undefined8 *)(lVar1 + 0x138);
  *(undefined8 **)(lVar1 + 0x138) = puVar2;
  return puVar2;
}


