void
findclient(const Arg *arg)
{
	if (!arg || !arg->v || !selmon->clients )
		return;

	Arg shiftit;
	Client *c; 
	
	for (c=selmon->clients; c; c= c->next){
		if (strstr(c->name, arg->v)){
			shiftit.ui = c->tags;
			view(&shiftit);
			return;
		}
	}
}
