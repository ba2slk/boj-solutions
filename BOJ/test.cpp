void dfnlow(int u, int v)
{

	/*compute dfn and low while performing a dfs search beginning at vertex u. v is the parent of u(if any)*/

	nodepointer ptr;
	int w;
	dfn[u] = low[u] = num++;
	for (ptr = graph[u]; ptr; ptr = ptr->link)
	{
		w = ptr->vertex;
		if (dfn[w] < 0)
		{
			dfnlow(w, u);
			low[u] = MIN2(low[u], low[w]);
		}

		else if (w != v)
		{
			low[u] = MIN2(low[u], dfn[w]);
		}
	}
}