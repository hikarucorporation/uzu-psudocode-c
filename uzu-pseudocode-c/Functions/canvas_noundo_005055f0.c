// Function : canvas_noundo
// Namespace: 
// Entry    : 005055f0
// Prototype: undefined canvas_noundo(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 005055f0 - 005056b9


void canvas_noundo(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  long lVar1;
  long *plVar2;
  undefined8 in_R9;
  undefined1 in_stack_00000008;
  
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar1 = **(long **)(*plVar2 + 0x48);
  if ((param_9 != 0) && (*(long *)(lVar1 + 0x30) != param_9)) {
    return;
  }
  if ((*(code **)(lVar1 + 0x18) == (code *)0x0) || (*(long *)(lVar1 + 0x28) == 0)) {
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x28) = 0;
    *(undefined8 *)(lVar1 + 0x30) = 0;
    *(undefined4 *)(lVar1 + 0x20) = 1;
    *(undefined **)(lVar1 + 0x38) = &DAT_0065469b;
    return;
  }
  (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x30),*(long *)(lVar1 + 0x28),0);
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar1 = **(long **)(*plVar2 + 0x48);
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined4 *)(lVar1 + 0x20) = 1;
  *(undefined **)(lVar1 + 0x38) = &DAT_0065469b;
  pdgui_vmess(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x654682,"rss","nobody",
              &DAT_0065efc5,&DAT_0065efc5,in_R9,in_stack_00000008);
  return;
}


