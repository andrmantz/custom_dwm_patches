void
focusemptytag(const Arg *arg)
{
  Client *c;
  unsigned int i, occ=0;
  Arg shiftit;
  for (c = selmon->clients; c; c = c->next)
    occ |= c->tags == 255 ? 0 : c->tags;

  for (i = 0; i < LENGTH(tags); i++){ 
    if (!(occ & 1 << i ))
      break;
    if (i==LENGTH(tags)-1)
      return;
  }
  shiftit.ui = 1 << i;
  if (arg-> i == 1)
    view(&shiftit);
  else if (arg->i == -1)
    tag(&shiftit);
  return;
}

