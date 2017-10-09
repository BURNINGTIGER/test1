template <typename Iterator1, typename Iterator2>
auto merge(Iterator1 first1, Iterator1 last1, Iterator1 first2, Iterator1 last2, Iterator2 output)->Iterator2
{
	for (Iterator iter1 = first1; iter1 != last1; iter1++)
	{
		for (Iterator iter2 = first2; iter2 != last2; iter2++)
		{
			if (*iter1 < *iter2)
			{
				*output = *iter1;
				output++;
				iter1++;
			}
			else
			{
				*output = *iter2;
				output++;
			}
		}
	}
	return *output;
}
