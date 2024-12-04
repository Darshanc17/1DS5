from django.shortcuts import render, get_object_or_404
from .models import Client

def home(request):
    clients = Client.objects.all()
    return render(request, 'portfolio/home.html', {'clients': clients})


def client_detail(request, client_id):
    client = get_object_or_404(Client, pk=client_id)
    return render(request, 'portfolio/client_detail.html', {'client': client})