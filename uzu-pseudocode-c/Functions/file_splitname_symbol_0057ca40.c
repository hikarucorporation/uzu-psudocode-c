// Function : file_splitname_symbol
// Namespace: 
// Entry    : 0057ca40
// Prototype: undefined file_splitname_symbol(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0057ca40 - 0057cb04


void file_splitname_symbol
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
               char *param_13,undefined8 param_14)

{
  char *pcVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 uVar4;
  undefined4 local_428 [2];
  undefined8 *local_420;
  undefined4 local_418;
  undefined8 *local_410;
  char local_408 [999];
  undefined1 local_21;
  
  sys_unbashfilename((char *)*param_10,local_408);
  local_21 = 0;
  pcVar1 = strrchr(local_408,0x2f);
  if (local_408 < pcVar1) {
    *pcVar1 = '\0';
    local_420 = gensym(local_408);
    if (pcVar1[1] != '\0') {
      local_428[0] = 2;
      local_418 = 2;
      local_410 = gensym(pcVar1 + 1);
      plVar3 = *(long **)(param_9 + 0x58);
      puVar2 = gensym("list");
      outlet_list(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,puVar2,2,local_428,param_13,param_14);
      return;
    }
    plVar3 = *(long **)(param_9 + 0x58);
    uVar4 = extraout_XMM0_Qa;
  }
  else {
    plVar3 = *(long **)(param_9 + 0x60);
    gensym(local_408);
    uVar4 = extraout_XMM0_Qa_01;
  }
  outlet_symbol(uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3);
  return;
}


