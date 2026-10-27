// Function : toString
// Namespace: Steinberg:FUID
// Entry    : 00185bf0
// Prototype: undefined toString(FUID * this, char * param_1)
// Body     : 00185bf0 - 00185e40


/* Steinberg::FUID::toString(char*) const */

void __thiscall Steinberg::FUID::toString(FUID *this,char *param_1)

{
  char local_23 [3];
  
  if (param_1 != (char *)0x0) {
    *param_1 = '\0';
    snprintf(local_23,3,"%02X",(ulong)(byte)this[8]);
    strcat(param_1,local_23);
    snprintf(local_23,3,"%02X",(ulong)(byte)this[9]);
    strcat(param_1,local_23);
    snprintf(local_23,3,"%02X",(ulong)(byte)this[10]);
    strcat(param_1,local_23);
    snprintf(local_23,3,"%02X",(ulong)(byte)this[0xb]);
    strcat(param_1,local_23);
    snprintf(local_23,3,"%02X",(ulong)(byte)this[0xc]);
    strcat(param_1,local_23);
    snprintf(local_23,3,"%02X",(ulong)(byte)this[0xd]);
    strcat(param_1,local_23);
    snprintf(local_23,3,"%02X",(ulong)(byte)this[0xe]);
    strcat(param_1,local_23);
    snprintf(local_23,3,"%02X",(ulong)(byte)this[0xf]);
    strcat(param_1,local_23);
    snprintf(local_23,3,"%02X",(ulong)(byte)this[0x10]);
    strcat(param_1,local_23);
    snprintf(local_23,3,"%02X",(ulong)(byte)this[0x11]);
    strcat(param_1,local_23);
    snprintf(local_23,3,"%02X",(ulong)(byte)this[0x12]);
    strcat(param_1,local_23);
    snprintf(local_23,3,"%02X",(ulong)(byte)this[0x13]);
    strcat(param_1,local_23);
    snprintf(local_23,3,"%02X",(ulong)(byte)this[0x14]);
    strcat(param_1,local_23);
    snprintf(local_23,3,"%02X",(ulong)(byte)this[0x15]);
    strcat(param_1,local_23);
    snprintf(local_23,3,"%02X",(ulong)(byte)this[0x16]);
    strcat(param_1,local_23);
    snprintf(local_23,3,"%02X",(ulong)(byte)this[0x17]);
    strcat(param_1,local_23);
  }
  return;
}


