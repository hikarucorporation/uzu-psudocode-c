// Function : toRegistryString
// Namespace: Steinberg:FUID
// Entry    : 001865a0
// Prototype: undefined toRegistryString(FUID * this, char * param_1)
// Body     : 001865a0 - 0018684c


/* Steinberg::FUID::toRegistryString(char*) const */

void __thiscall Steinberg::FUID::toRegistryString(FUID *this,char *param_1)

{
  char local_60 [5];
  char local_5b [5];
  char local_56 [5];
  char local_51 [13];
  char local_44 [9];
  char local_3b [3];
  char *local_38;
  
  local_44[0] = '\0';
  local_38 = param_1;
  snprintf(local_51,3,"%02X",(ulong)(byte)this[8]);
  strcat(local_44,local_51);
  snprintf(local_51,3,"%02X",(ulong)(byte)this[9]);
  strcat(local_44,local_51);
  snprintf(local_51,3,"%02X",(ulong)(byte)this[10]);
  strcat(local_44,local_51);
  snprintf(local_51,3,"%02X",(ulong)(byte)this[0xb]);
  strcat(local_44,local_51);
  local_5b[0] = '\0';
  snprintf(local_51,3,"%02X",(ulong)(byte)this[0xc]);
  strcat(local_5b,local_51);
  snprintf(local_51,3,"%02X",(ulong)(byte)this[0xd]);
  strcat(local_5b,local_51);
  local_60[0] = '\0';
  snprintf(local_51,3,"%02X",(ulong)(byte)this[0xe]);
  strcat(local_60,local_51);
  snprintf(local_51,3,"%02X",(ulong)(byte)this[0xf]);
  strcat(local_60,local_51);
  local_56[0] = '\0';
  snprintf(local_51,3,"%02X",(ulong)(byte)this[0x10]);
  strcat(local_56,local_51);
  snprintf(local_51,3,"%02X",(ulong)(byte)this[0x11]);
  strcat(local_56,local_51);
  local_51[0] = '\0';
  snprintf(local_3b,3,"%02X",(ulong)(byte)this[0x12]);
  strcat(local_51,local_3b);
  snprintf(local_3b,3,"%02X",(ulong)(byte)this[0x13]);
  strcat(local_51,local_3b);
  snprintf(local_3b,3,"%02X",(ulong)(byte)this[0x14]);
  strcat(local_51,local_3b);
  snprintf(local_3b,3,"%02X",(ulong)(byte)this[0x15]);
  strcat(local_51,local_3b);
  snprintf(local_3b,3,"%02X",(ulong)(byte)this[0x16]);
  strcat(local_51,local_3b);
  snprintf(local_3b,3,"%02X",(ulong)(byte)this[0x17]);
  strcat(local_51,local_3b);
  snprintf(local_38,0x28,"{%s-%s-%s-%s-%s}",local_44,local_5b,local_60,local_56,local_51);
  return;
}


