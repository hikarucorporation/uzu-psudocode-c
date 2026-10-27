// Function : iemgui_put_in_braces
// Namespace: 
// Entry    : 00576990
// Prototype: undefined8 * iemgui_put_in_braces(undefined8 * param_1)
// Body     : 00576990 - 005769fc


undefined8 * iemgui_put_in_braces(undefined8 *param_1)

{
  char cVar1;
  char *__s;
  size_t sVar2;
  char *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  char local_408;
  char local_407 [1015];
  
  __s = (char *)*param_1;
  sVar2 = strlen(__s);
  pcVar3 = &local_408;
  if (999 < sVar2) {
    return param_1;
  }
  lVar5 = 0;
  do {
    *pcVar3 = '{';
    pcVar3 = pcVar3 + 1;
    do {
      cVar1 = __s[lVar5];
      *pcVar3 = cVar1;
      if (cVar1 == '\0') {
        pcVar3[0] = '}';
        pcVar3[1] = '\0';
        puVar4 = gensym(&local_408);
        return puVar4;
      }
      pcVar3 = pcVar3 + 1;
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 != 0);
  } while( true );
}


