// Function : iemgui_dollar2raute
// Namespace: 
// Entry    : 00574000
// Prototype: undefined8 * iemgui_dollar2raute(undefined8 * param_1)
// Body     : 00574000 - 0057406f


undefined8 * iemgui_dollar2raute(undefined8 *param_1)

{
  char cVar1;
  char *__s;
  size_t sVar2;
  long lVar3;
  char local_408 [1016];
  
  __s = (char *)*param_1;
  sVar2 = strlen(__s);
  if (sVar2 < 1000) {
    lVar3 = 0;
    cVar1 = *__s;
    while( true ) {
      while (cVar1 == '$') {
        local_408[lVar3] = '#';
        lVar3 = lVar3 + 1;
        cVar1 = __s[lVar3];
      }
      local_408[lVar3] = cVar1;
      if (cVar1 == '\0') break;
      lVar3 = lVar3 + 1;
      cVar1 = __s[lVar3];
    }
    param_1 = gensym(local_408);
  }
  return param_1;
}


