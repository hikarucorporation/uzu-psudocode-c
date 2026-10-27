// Function : append
// Namespace: Steinberg:String
// Entry    : 00180020
// Prototype: String * append(String * this, byte param_1, uint param_2)
// Body     : 00180020 - 00180190


/* Steinberg::String::append(char, int) */

String * __thiscall Steinberg::String::append(String *this,byte param_1,uint param_2)

{
  String *pSVar1;
  undefined8 uVar2;
  size_t sVar3;
  char *__dest;
  ulong uVar4;
  uint uVar5;
  byte local_42 [2];
  undefined **local_40;
  char *local_38;
  uint local_30;
  
  local_42[1] = 0;
  local_42[0] = param_1;
  if (param_2 == 1) {
    pSVar1 = append(this,(char *)local_42,1);
    return pSVar1;
  }
  if ((int)param_2 < 2) {
    return this;
  }
  if ((*(uint *)(this + 0x10) & 0x40000000) == 0) {
    uVar2 = resize(this,(*(uint *)(this + 0x10) & 0x3fffffff) + param_2,0,'\0');
    if ((char)uVar2 == '\0') {
      return this;
    }
    if (*(long *)(this + 8) != 0) {
      memset((void *)(*(long *)(this + 8) + (ulong)(*(uint *)(this + 0x10) & 0x3fffffff)),
             (uint)param_1,(ulong)param_2);
    }
    *(uint *)(this + 0x10) =
         *(uint *)(this + 0x10) & 0xc0000000 | param_2 + *(uint *)(this + 0x10) & 0x3fffffff;
    return this;
  }
  local_38 = (char *)0x0;
  local_40 = &PTR__String_00702c10;
  sVar3 = strlen((char *)local_42);
  uVar5 = (uint)sVar3;
  if ((uVar5 == 0) || (__dest = malloc((ulong)(uVar5 + 1)), __dest == (char *)0x0)) {
    __dest = (char *)0x0;
LAB_00180153:
    local_30 = 0x40000000;
  }
  else {
    *__dest = '\0';
    __dest[sVar3 & 0xffffffff] = '\0';
    local_38 = __dest;
    if (0 < (int)uVar5) {
      memcpy(__dest,local_42,sVar3 & 0xffffffff);
    }
    local_30 = uVar5 & 0x3fffffff;
    if ((sVar3 & 0x3fffffff) == 0) goto LAB_00180153;
                    /* try { // try from 00180133 to 00180169 has its CatchHandler @ 00180191 */
    uVar4 = _toWideString((String *)&local_40,__dest,local_30,0);
    if ((char)uVar4 == '\0') goto LAB_0018016d;
    __dest = local_38;
  }
  this = append(this,*(undefined2 *)__dest,param_2);
LAB_0018016d:
  local_40 = &PTR__String_00702c10;
  if (local_38 != (char *)0x0) {
    free(local_38);
  }
  return this;
}


