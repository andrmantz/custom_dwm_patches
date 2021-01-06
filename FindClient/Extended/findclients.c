void
findclient(const Arg *arg)
{
	if (!arg || !arg->v )
		return;

	Match *temp = (Match *) arg->v;

	if (selmon->clients){
		Arg shiftit;
		Client *c; 
		unsigned int used_tags=0;
		for (c=selmon->clients; c; c= c->next){
			used_tags |= c->tags == 255 ? 0 : c->tags;
			if (strstr(c->name, temp->app_name)){
				shiftit.ui = c->tags;
				view(&shiftit);
				return;
			}
		}
		unsigned int i;
		for (i=0; i < LENGTH(tags); i++){
			if (!(used_tags & 1 << i)){
				shiftit.ui = 1 << i;
				view(&shiftit);
				break;
			}
		}
	}

	const char *new[] = { temp->name , NULL };
	if (fork() ==0){
		setsid();
		execvp(((char **)new)[0], (char **)new);
		perror(" failed");
		exit(EXIT_SUCCESS);
	}
}

