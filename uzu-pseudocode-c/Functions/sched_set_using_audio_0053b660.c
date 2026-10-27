// Function : sched_set_using_audio
// Namespace: 
// Entry    : 0053b660
// Prototype: undefined sched_set_using_audio(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, int param_9)
// Body     : 0053b660 - 0053b6bc


void sched_set_using_audio
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               int param_9)

{
  char *pcVar1;
  undefined8 in_RAX;
  undefined8 *puVar2;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined1 in_stack_00000008;
  
  sched_useaudio = param_9;
  if (param_9 == 0) {
    sched_referencerealtime = sys_getrealtime();
    puVar2 = (undefined8 *)__tls_get_addr(&PTR_007159b0);
    param_1 = *(undefined8 *)*puVar2;
    pcVar1 = "verbose off";
    sched_referencelogicaltime = param_1;
  }
  else {
    pcVar1 = "verbose on";
  }
  pdgui_vmess(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x656c2a,"r",
              pcVar1 + 8,in_RAX,in_R8,in_R9,in_stack_00000008);
  return;
}


