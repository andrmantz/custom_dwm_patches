void 
focususedtag(const Arg *arg){
  Client *c;
  unsigned int i, occ=0, currtag = 0;
  Arg shiftit;
  
  if (!selmon->clients || !(arg->i == 1 || arg->i == -1))
    return;

  for (i=selmon->tagset[selmon->seltags]; i>1;i/=2)
    currtag++;
  
  for (c = selmon->clients; c; c= c->next)
    occ |= c->tags == 255 ? 0 : c->tags;

  
  if (arg->i == 1){
    for (i=currtag + 1; i<LENGTH(tags); i++){
      if (occ & 1 << i){
        shiftit.ui = 1 << i;
        view(&shiftit);
        return ;
      }  
    }
    
    for (i=0; i<currtag;i++){
      if (occ & 1 << i){
        shiftit.ui = 1 << i;
        view(&shiftit);
        return ;
      }      
    }
    return;
  }

  for (i=currtag-1; i>=0; i--){
    if (occ & 1 << i){
      shiftit.ui = 1 << i;
      view(&shiftit);
      return ;
    }  
  }
    
  for (i=LENGTH(tags) - 1; i>currtag;i--){
    if (occ & 1 << i){
      shiftit.ui = 1 << i;
      view(&shiftit);
      return ;
    }      
  }
}

