// Function : sys_findprogdir
// Namespace: 
// Entry    : 00543560
// Prototype: undefined sys_findprogdir(char * param_1)
// Body     : 00543560 - 00543692


void sys_findprogdir(char *param_1)

{
  int iVar1;
  ssize_t sVar2;
  char *pcVar3;
  undefined8 *puVar4;
  size_t sVar5;
  ushort *puVar6;
  ushort local_888;
  undefined1 local_886;
  undefined1 local_4a1;
  stat local_498;
  char local_408 [970];
  undefined1 local_3e;
  
  local_888 = local_888 & 0xff00;
  sVar2 = readlink("/proc/self/exe",(char *)&local_888,1000);
  if (sVar2 - 1U < 999) {
    *(undefined1 *)((long)&local_888 + sVar2) = 0;
  }
  if ((char)local_888 == '\0') {
    strncpy((char *)&local_888,param_1,1000);
  }
  local_4a1 = 0;
  sys_unbashfilename((char *)&local_888,local_408);
  pcVar3 = strrchr(local_408,0x2f);
  if (pcVar3 == (char *)0x0) {
    local_888 = 0x2e;
  }
  else {
    *pcVar3 = '\0';
    pcVar3 = strrchr(local_408,0x2f);
    if (pcVar3 == (char *)0x0) {
      local_886 = 0;
      local_888 = 0x2e2e;
    }
    else {
      sVar5 = (long)pcVar3 - (long)local_408;
      strncpy((char *)&local_888,local_408,sVar5);
      *(undefined1 *)((long)&local_888 + sVar5) = 0;
    }
  }
  strncpy(local_408,(char *)&local_888,0x3ca);
  local_3e = 0;
  sVar5 = strlen(local_408);
  builtin_strncpy(local_408 + sVar5,"/lib/pd",8);
  iVar1 = stat(local_408,&local_498);
  puVar6 = &local_888;
  if (-1 < iVar1) {
    puVar6 = (ushort *)local_408;
  }
  puVar4 = gensym((char *)puVar6);
  *(undefined8 **)PTR_sys_libdir_00715520 = puVar4;
  return;
}


