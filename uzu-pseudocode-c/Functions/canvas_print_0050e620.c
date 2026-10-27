// Function : canvas_print
// Namespace: 
// Entry    : 0050e620
// Prototype: undefined canvas_print(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 * param_10)
// Body     : 0050e620 - 0050e651


void canvas_print(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 *param_10)

{
  char *pcVar1;
  undefined1 in_stack_00000008;
  
  pcVar1 = "x.ps";
  if (*(char *)*param_10 != '\0') {
    pcVar1 = (char *)*param_10;
  }
  pdgui_vmess(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"cr rs",param_9,
              "postscript","-file",pcVar1,in_stack_00000008);
  return;
}


