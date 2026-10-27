// Function : canvas_texteditor
// Namespace: 
// Entry    : 00512010
// Prototype: undefined canvas_texteditor(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00512010 - 0051206d


void canvas_texteditor(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      long param_9)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined1 in_stack_ffffffffffffffe8;
  uint local_c;
  undefined *local_8;
  
  puVar1 = *(undefined8 **)(*(long *)(param_9 + 0xc0) + 0x28);
  if (puVar1 == (undefined8 *)0x0) {
    local_8 = &DAT_005e2ee7;
    local_c = 0;
    uVar2 = 0;
  }
  else {
    param_1 = rtext_gettext(puVar1,&local_8,&local_c);
    uVar2 = (ulong)local_c;
  }
  pdgui_vmess(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x654c62,"p",uVar2,
              local_8,in_R8,in_R9,in_stack_ffffffffffffffe8);
  return;
}


