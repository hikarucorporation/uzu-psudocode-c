// Function : file_splitext_symbol
// Namespace: 
// Entry    : 0057c920
// Prototype: undefined file_splitext_symbol(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0057c920 - 0057ca1a


void file_splitext_symbol
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
               char *param_13,undefined8 param_14)

{
  long *plVar1;
  char cVar2;
  size_t sVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined4 local_428 [2];
  undefined8 *local_420;
  undefined4 local_418;
  undefined8 local_410;
  char local_408 [999];
  undefined1 local_21;
  
  sys_unbashfilename((char *)*param_10,local_408);
  local_21 = 0;
  sVar3 = strlen(local_408);
  pcVar5 = local_408 + (sVar3 - 1);
  if ((local_408 <= pcVar5) && (cVar2 = *pcVar5, cVar2 != '.')) {
    while( true ) {
      if (cVar2 == '/') {
        pcVar5 = (char *)((long)&local_410 + 7);
      }
      else {
        if (cVar2 == '.') {
          *pcVar5 = '\0';
          local_428[0] = 2;
          local_420 = gensym(local_408);
          local_418 = 2;
          local_410 = gensym(pcVar5 + 1);
          plVar1 = *(long **)(param_9 + 0x58);
          puVar4 = gensym("list");
          outlet_list(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      plVar1,puVar4,2,local_428,param_13,param_14);
          return;
        }
        pcVar5 = pcVar5 + -1;
      }
      if (pcVar5 < local_408) break;
      cVar2 = *pcVar5;
    }
  }
  plVar1 = *(long **)(param_9 + 0x60);
  gensym(local_408);
  outlet_symbol(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1);
  return;
}


